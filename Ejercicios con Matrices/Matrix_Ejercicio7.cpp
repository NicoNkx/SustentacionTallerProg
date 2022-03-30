#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<endl;
	cout<<"Ingrese el orden de la matriz: ";cin>>n;
	int matrix[n][n];
	int vector_d[2*n];
	cout<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la primera matriz: ";cin>>matrix[i][j];
		}	
	}
	// IMPRESION DE LA MATRIZ
	cout<<endl;
	cout<<"==> MATRIZ INGRESADA"<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;	
	}
	
	// DIAGONAL PRINCIPAL
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				vector_d[i]=matrix[i][j];
			}
		}
	}
	// DIAGONAL SECUNDARIA
	int x=n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i+j)==(n-1)){
				vector_d[x]=matrix[i][j];
				x++;
			}
		}
	}
	cout<<"\n";
	for(int i=0;i<(2*n);i++){
		cout<<"Vector_Diagonal: "<<vector_d[i]<<endl;
	}
	
	
	// PRIMOS DE LAS DOS DIAGONALES.

	int vector_primos[2*n];
	int div,contd=0,contp=0;
	for(int i=0;i<(2*n);i++){
		contd=0;
		for(int j=1;j<=vector_d[i];j++){
			div=vector_d[i]%j;
			if(div==0){
				contd++;
			}
		}
		if(contd==2){
			vector_primos[contp]=vector_d[i];
			contp++;	
		}
	}
	cout<<"\n";
	for(int i=0;i<contp;i++){
		cout<<"Vector_DiagonalPrimos: "<<vector_primos[i]<<endl;
	}
	
	
}

