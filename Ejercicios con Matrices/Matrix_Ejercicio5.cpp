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
	int conf1=0;
	for(int i=0;i<f1;i++){
		for(int j=0;j<c1;j++){
			for(int k=0;k<11;k++){
				if(matrix_1[i][j]==vector_f[k]){
					vector_f1[conf1]=matrix_1[i][j];
					conf1++;
					
				}
			}
			
		}
	}
	
	int conf2=0;
	for(int i=0;i<f2;i++){
		for(int j=0;j<c2;j++){
			for(int k=0;k<11;k++){
				if(matrix_2[i][j]==vector_f[k]){
					vector_f2[conf2]=matrix_2[i][j];
					conf2++;
					
				}
			}
			
		}
	}
	//cout<<"\n";
	for(int i=0;i<conf1;i++){
		//cout<<"Fibonacci M1: "<<vector_f1[i]<<endl;
	}
	cout<<"\n";
	for(int i=0;i<conf2;i++){
		//cout<<"Fibonacci M2: "<<vector_f2[i]<<endl;
	}
	
	int tf=(conf1+conf1)-1;
	int vector_Fi[tf];
	int x=0;
	
	for(int i=0;i<conf1;i++){
		vector_Fi[i]=vector_f1[i];
	}
	
	for(int i=conf1;i<tf;i++){
		vector_Fi[i]=vector_f2[x];
		x++;
	}
	cout<<"\n";
	for(int i=0;i<=tf;i++){
		cout<<"Vecotor_Fi: "<<vector_Fi[i]<<endl;
	}	
	
	
	// DATOS SIN REPETIR DE UN VECTOR
	int con=0;
	int vector[tf];
	bool indicador=false;
	for(int i=0;i<tf;i++){
		for(int j=0;j<tf;j++){
			if(vector_Fi[i]==vector[j]){ // 1 == 0, 1==1
				indicador=true;  
				break; 
			}else{
				indicador=false;         // indicador = false
				//vector[k]=matrix[i][j];  // 0 ==> 1
			}
		}
		if(indicador==false){
			vector[con]=vector_Fi[i];
			con++;
		}	
	}
	
	cout<<"\n";
	for(int i=0;i<con;i++){
		cout<<"Vecotor_Fi: "<<vector[i]<<endl;
	}
	
}