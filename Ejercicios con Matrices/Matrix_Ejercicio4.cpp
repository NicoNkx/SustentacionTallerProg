#include<iostream>
using namespace std;
int main(){
	int f,c	;
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
	
	// DETERMINAR LOS PRIMOS
	int vector_primos[c*f];
	int div,contd=0,contp=0;
	
	for(int j=0;j<c;j++){
		for(int i=0;i<f;i++){
			contd=0;
			for(int k=1;k<=matrix[i][j];k++){
				div=matrix[i][j]%k;
				if(div==0){
					contd++;
				}
			}
			if(contd==2){
				vector_primos[contp]=matrix[i][j];
				contp++;	
			}
		}
	} 
	
	cout<<"\n";
	for(int i=0;i<contp;i++){
		cout<<"Vector Primos: "<<vector_primos[i]<<endl;
	}
	
	int mayor=0, menor;
	for(int i=0;i<contp;i++){
		if(vector_primos[i]>mayor){
			mayor=vector_primos[i];
		}
	}
	menor=mayor;
	for(int i=0;i<contp;i++){
		if(vector_primos[i]<menor){
			menor=vector_primos[i];
		}
	}
	
	cout<<"\n";
	cout<<"Primo mayor: "<<mayor<<endl;
	cout<<"Primo menor: "<<menor<<endl;
	
	//EXTRACCION DE POSICIONES
	int pM,pm;
	for(int j=0;j<c;j++){
		for(int i=0;i<f;i++){
			if(matrix[i][j]==mayor){
				pM=j;
			}
			if(matrix[i][j]==menor){
				pm=j;
			}
		}
	}
	cout<<"\n";
	cout<<"Columna mayor: "<<pM<<endl;
	cout<<"Columna menor: "<<pm<<endl;
	
	
	// INTERCAMBIO DE COLUMNAS
	int vector_aux[f];
	for(int i=0;i<c;i++){
		vector_aux[i]=matrix[i][pM]; // Proteger fila del Mayor.
		matrix[i][pM]=matrix[i][pm];
		matrix[i][pm]=vector_aux[i];
	}
	
	// IMPRESION DE LA NUEVA MATRIZ
	cout<<endl;
	cout<<"==> MATRIZ CON INTERCAMBIO"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;	
	}
	
	
}