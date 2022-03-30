#include<iostream>
using namespace std;
int main(){
	int f,c,mayor=0,menor;
	cout<<endl;
	cout<<"Ingrese el numero de filas de la matriz: ";cin>>f;
	cout<<"Ingrese el numero de columnas de la matriz : ";cin>>c;
	int matrix[f][c];

	cout<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<"): ";cin>>matrix[i][j];
		}	
	}
	
	// IMPRESION DE LA MATRIZ
	cout<<endl;
	cout<<"==> MATRIZ INGRESADA"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;	
	}
	
	// NUMERO MAYOR - NUMERO MENOR
	int vector_M[c];
	int vector_m[c];
	float vector_prom[c];
	for(int j=0;j<c;j++){
		mayor=0;
		for(int i=0;i<f;i++){
			if(matrix[i][j]>mayor){
				mayor=matrix[i][j];
			}
		}
		vector_M[j]=mayor;
	}

	for(int j=0;j<c;j++){
		menor=vector_M[j];
		for(int i=0;i<f;i++){
			if(matrix[i][j]<menor){
				menor=matrix[i][j];
			}
		}
		vector_m[j]=menor;
	}
	
	// PROMEDIO DE CADA COLUMNA
	float suma,promedio;
	for(int j=0;j<c;j++){
		suma=0;
		promedio=0;
		for(int i=0;i<f;i++){
			suma+=matrix[i][j];
		}
		promedio=suma/f;
		vector_prom[j]=promedio;
	}

	cout<<"\n";
	for(int i=0;i<c;i++){
		cout<<"Mayor - Menor C"<<i<<": "<<vector_M[i]<<" - "<<vector_m[i]<<endl;
	}
	
	cout<<"\n";
	for(int i=0;i<c;i++){
		cout<<"Promedio C"<<i<<": "<<vector_prom[i]<<endl;
	}
	
	
	// ORDENAMIENTO DE LAS COLUMNAS
	int pos,aux;
	for(int i=0;i<c;i++){
		pos=i;
		aux=vector_prom[i];
		
		while((pos>0)and(vector_prom[pos-1]>aux)){
			vector_prom[pos]=vector_prom[pos-1];
			pos--;
		}
		
		vector_prom[pos]=aux;	
	}
	
	cout<<"\n";
	for(int i=0;i<c;i++){
		cout<<"Promedio C_Ordenado:"<<i<<": "<<vector_prom[i]<<endl;
	}
	
}