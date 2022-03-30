#include<iostream>
using namespace std;
int main(){
		int f1,c1,f2,c2;
	int vector_f[]={1,2,3,5,8,13,21,34,55,89,144};
	int vector_f1[20];
	int vector_f2[20];
	cout<<endl;
	cout<<"Ingrese el numero de filas de la primer matriz: ";cin>>f1;
	cout<<"Ingrese el numero de columnas de la primer matriz : ";cin>>c1;
	int matrix_1[f1][c1];
	cout<<"\n==>Ingrese numeros menores a 100:";
	cout<<endl;
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la primera matriz: ";cin>>matrix_1[i][j];
		}	
	}
	cout<<"\n";
	cout<<"Ingrese el numero de filas de la segunda matriz: ";cin>>f2;
	cout<<"Ingrese el numero de columnas de la segunda matriz : ";cin>>c2;
	int matrix_2[f2][c2];
	
	
	cout<<endl;
	for(int i=0;i<f2;i++){
		for(int j=0;j<c2;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<") de la segunda matriz: ";cin>>matrix_2[i][j];
		}	
	}
	
	// IMPRESION DE LA MATRIZ
	cout<<endl;
	cout<<"==> MATRIZ (1) INGRESADA"<<endl;
	
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			cout<<matrix_1[i][j]<<"  ";
		}
		cout<<endl;	
	}
	
	cout<<endl;
	cout<<"==> MATRIZ (2) INGRESADA"<<endl;
	for(int i=0;i<f2;i++){
		for(int j=0;j<c2;j++){
			cout<<matrix_2[i][j]<<"  ";
		}
		cout<<endl;	
	}
	
	// NUMERO PRIMOS DE LA MATRIZ 1
	int vector_primos1[c1*f1];
	int div,contd=0,contp1=0;
	
	for(int j=0;j<c1;j++){
		for(int i=0;i<f1;i++){
			contd=0;
			for(int k=1;k<=matrix_1[i][j];k++){
				div=matrix_1[i][j]%k;
				if(div==0){
					contd++;
				}
			}
			if(contd==2){
				vector_primos1[contp1]=matrix_1[i][j];
				contp1++;	
			}
		}
	} 
	// NUMERO PRIMOS DE LA MATRIZ 2
	int vector_primos2[c2*f2];
	div,contd=0;
	int contp2=0;
	
	for(int j=0;j<c2;j++){
		for(int i=0;i<f2;i++){
			contd=0;
			for(int k=1;k<=matrix_2[i][j];k++){
				div=matrix_2[i][j]%k;
				if(div==0){
					contd++;
				}
			}
			if(contd==2){
				vector_primos2[contp2]=matrix_2[i][j];
				contp2++;	
			}
		}
	}

	cout<<"\n";
	for(int i=0;i<contp1;i++){
		cout<<"Vector Primos1: "<<vector_primos1[i]<<endl;
	}
	
	cout<<"\n";
	for(int i=0;i<contp2;i++){
		cout<<"Vector Primos2: "<<vector_primos2[i]<<endl;
	}
	
	int t=(contp1+contp2)-1;
	int vector_P[t];
	int x=0;
	
	for(int i=0;i<contp1;i++){
		vector_P[i]=vector_primos1[i];
	}
	
	for(int i=contp1;i<t;i++){
		vector_P[i]=vector_primos2[x];
		x++;
	}
	cout<<"\n";
	for(int i=0;i<t;i++){
		cout<<"Vecotor_Pr: "<<vector_P[i]<<endl;
	}
	
	// DATOS SIN REPETIR DE UN VECTOR

	int con=0;
	int vector[t];
	bool indicador=false;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(vector_P[i]==vector[j]){ // 1 == 0, 1==1
				indicador=true;  
				break; 
			}else{
				indicador=false;         // indicador = false
				//vector[k]=matrix[i][j];  // 0 ==> 1
			}
		}
		if(indicador==false){
			vector[con]=vector_P[i];
			con++;
		}	
	}
	
	cout<<"\n";
	for(int i=0;i<con;i++){
		cout<<"Vecotor_PComunes: "<<vector[i]<<endl;
	}
}



