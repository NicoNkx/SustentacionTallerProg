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
	
	// NUMERO MAYOR - EXTARCCION DE FILA	
	int mayor=0,menor,fila_M,fila_m;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			if(matrix[i][j]>mayor){
				mayor=matrix[i][j];
				fila_M=i;
			}
		}	
	}
	menor=mayor;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			if(matrix[i][j]<menor){
				menor=matrix[i][j];
				fila_m=i;
			}
		}	
	}
	
	cout<<"\n";
	cout<<"Numero Mayor: "<<mayor<<" ==> Fila: "<<fila_M<<endl;
	cout<<"Numero Menor: "<<menor<<" ==> Fila: "<<fila_m<<endl;
	
	// INTERCAMBIO DE FILAS
	int vector_aux[c];
	for(int i=0;i<c;i++){
		vector_aux[i]=matrix[fila_M][i]; // Proteger fila del Mayor.
		matrix[fila_M][i]=matrix[fila_m][i];
		matrix[fila_m][i]=vector_aux[i];
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