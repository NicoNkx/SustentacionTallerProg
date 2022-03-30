 #include<iostream>
using namespace std;
int main(){
	int f,c;
	bool indicador=false;
	cout<<endl;
	cout<<"Ingrese el numero de filas de la matriz: ";cin>>f;
	cout<<"Ingrese el numero de columnas de la matriz: ";cin>>c;
	int t=f*c;
	int matrix[f][c];
	int vector[t];
	int con=0,conv=0, con_e=0;
	
	cout<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<"): ";cin>>matrix[i][j];
			vector[conv]=0;
			conv++;
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
	
	// EXTRACION DE DATOS REPETIDOS
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			for(int k=0;k<t;k++){
				if(matrix[i][j]==vector[k]){ // 1 == 0, 1==1
					indicador=true;  
					break; 
				}else{
					indicador=false;         // indicador = false
					//vector[k]=matrix[i][j];  // 0 ==> 1
				}
			}
			
			if(indicador==false){
				vector[con]=matrix[i][j];
				con++;
			}
			
		}
	}	

	// DATOS SIN REPETIR VECTOR [i]
	cout<<"\n";	
	// CONTEO DE LOS DATOS QUE SE REPITEN
	int v_cant[con-1];
	for(int k=0;k<con;k++){
		con_e=0;
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				if(vector[k]==matrix[i][j]){
					con_e++;
				}
				
			}
		}
		v_cant[k]=con_e++;
	}
	cout<<"\n";
	for(int i=0;i<con;i++){
		cout<<"Elemento: "<<vector[i]<<" ==> "<<v_cant[i]<<" veces."<<endl;
	}
	// ORDENAMIENTO DEL VECTOR CANTIDAD
	int y,pos,aux;
	for( y=0;y<con;y++){
		pos=y;
		aux=v_cant[y];
		while((pos>0)&&(v_cant[pos-1]>aux)){
			v_cant[pos]=v_cant[pos-1];
			pos--;
			//cout<<"Falla"<<endl;
		}
		v_cant[pos]=aux;
	}
	int noc=con-1;
	cout<<"\n";
	for(int i=noc;i>=0;i--){
		cout<<"Vector Cantidad: "<<v_cant[i]<<endl;
	}
}



