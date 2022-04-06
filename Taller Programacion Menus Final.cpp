#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<string.h>
using namespace std;
void menuPrincipal();

// FUNCIONES PARA VECTORES
int menuVectores();
int menuVectores_1();
int menuVectores_2();

// FUNCIONES PARA MATRICES
int menuMatrices();
int menuMatrices_1();
int menuMatrices_2();
int menuMatrices_3();

//FUNCIONES PARA CADENAS
int menuCadenas();
int menuCadenas_1();
int menuCadenas_2();

//EJERCICIOS VECTORES
int a;
void menu();
void llenar(int vec[]);
void primero( int vec[]);
void segundo(int vec[]);
void tercero(int vec[]);
void quinto();
void sexto();
void septimo();
void octavo();

//EJERCICIOS MATRICES
int ejercicio_1();
int ejercicio_2();
int ejercicio_3();
int ejercicio_4();
int ejercicio_5();
int ejercicio_6();
int ejercicio_7();
int ejercicio_8();
int ejercicio_9();
int ejercicio_10();
int ejercicio_11();
int ejercicio_12();

//EJERCICIOS CADENAS
int ContarCaracter();
int CaracterRepetido();
int CaracterMasRepetido();
char CadenaAlfa();
int EnteroLargo();
char CadenasOrdenadas();
char septimoCad();
char octavoCad();

int main(){
	int opciones;
	int salir=1,opcion,retorno;
	while(salir==1){
		menuPrincipal();
		cout<<"\nIngrese una opcion(Main): ";cin>>opcion;
		switch(opcion){
			case 1: 
				cout<<"=> Se escogio la opcion de vectores."<<endl;
				menuVectores();
			case 2:
				menuMatrices();
				break;
			case 3:
				cout<<"=> Sescogio la opcion de cadenas."<<endl;
				menuCadenas();
			case 4:
				salir=0;
				break;		
		}	
	}
	cout<<"\n==> El programa ha finalizado.";
}

// 	DEFINICION DE FUNCIONES
	// MENUS
void menuPrincipal(){
	cout<<"\n===================================================";
	cout<<"=================================="<<endl;
	cout<<"= INGRESE EL NUMERO DE LA OPCION ="<<endl;
	cout<<"==================================\n";
	
	cout<<"1- Vectores."<<endl;
	cout<<"2- Matrices."<<endl;
	cout<<"3- Cadenas."<<endl;
	cout<<"4- Salir."<<endl;
}
//MENU VECTORES
int menuVectores(){
	int salir=1;
	int op;
	while(salir==1){
		cout<<"\n==================================================="<<endl;
		cout<<"== MENU VECTORES ==\n"<<endl;
		
		cout<<"1- Menu Vectores 1."<<endl;
		cout<<"2- Menu Vectores 2."<<endl;
		cout<<"4- Regresar."<<endl;	
		
		cout<<"\nIngrese una opcion(Main): ";cin>>op;	
		
		switch(op){
			case 1:
				menuVectores_1();
				break;
			case 2:
				menuVectores_2();
				break;
			case 4:
				salir=0;
				break;
		}
	}
	return 0;
}


int menuVectores_1(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU VECTORES (1)=\n"<<endl;
		
		cout<<"1- Ejercicio 1."<<endl;
		cout<<"2- Ejercicio 2."<<endl;
		cout<<"3- Ejercicio 3."<<endl;
		cout<<"4- Ejercicio 4."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			primero();
			break;
		case 2:
			segundo();
			break;
		case 3:
			tercero();
			break;
		case 4:
			//cuarto();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}

int menuVectores_2(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU VECTORES (2)=\n"<<endl;
		
		cout<<"1- Ejercicio 5."<<endl;
		cout<<"2- Ejercicio 6."<<endl;
		cout<<"3- Ejercicio 7."<<endl;
		cout<<"4- Ejercicio 8."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			quinto();
			break;
		case 2:
			sexto();
			break;
		case 3:
			septimo();
			break;
		case 4:
			octavo();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}

// Definicion de funciones para matrices.
	//int menumMtrices();
int menuMatrices(){
	int salir=1;
	int op;
	while(salir==1){
		cout<<"\n==================================================="<<endl;
		cout<<"== MENU MATRICES ==\n"<<endl;
		
		cout<<"1- Menu matrices 1."<<endl;
		cout<<"2- Menu matrices 2."<<endl;
		cout<<"3- Menu matrices 3."<<endl;
		cout<<"4- Regresar."<<endl;	
		
		cout<<"\nIngrese una opcion(Main): ";cin>>op;	
		
		switch(op){
			case 1:
				menuMatrices_1();
				break;
			case 2:
				menuMatrices_2();
				break;
			case 3:
				menuMatrices_3();
				break;
			case 4:
				salir=0;
				break;
		}
	}
	return 0;
}

// MENU CADENAS

int menuCadenas(){
	int salir=1;
	int op;
	while(salir==1){
		cout<<"\n==================================================="<<endl;
		cout<<"== MENU CADENAS ==\n"<<endl;
		
		cout<<"1- Menu Cadenas 1."<<endl;
		cout<<"2- Menu Cadenas 2."<<endl;
		cout<<"4- Regresar."<<endl;	
		
		cout<<"\nIngrese una opcion(Main): ";cin>>op;	
		
		switch(op){
			case 1:
				menuCadenas_1();
				break;
			case 2:
				menuCadenas_2();
				break;
			case 4:
				salir=0;
				break;
		}
	}
	return 0;
}


int menuCadenas_1(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU CADENAS (1)=\n"<<endl;
		
		cout<<"1- Ejercicio 1."<<endl;
		cout<<"2- Ejercicio 2."<<endl;
		cout<<"3- Ejercicio 3."<<endl;
		cout<<"4- Ejercicio 4."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			ContarCaracter();
			break;
		case 2:
			CaracterRepetido();
			break;
		case 3:
			CaracterMasRepetido();
			break;
		case 4:
			CadenaAlfa();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}

int menuCadenas_2(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU CADENAS (2)=\n"<<endl;
		
		cout<<"1- Ejercicio 5."<<endl;
		cout<<"2- Ejercicio 6."<<endl;
		cout<<"3- Ejercicio 7."<<endl;
		cout<<"4- Ejercicio 8."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			EnteroLargo();
			break;
		case 2:
			CadenasOrdenadas();
			break;
		case 3:
			septimoCad();
			break;
		case 4:
			octavoCad();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}

	//int menuMatrices_1();
int menuMatrices_1(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU MATRICES (1)=\n"<<endl;
		
		cout<<"1- Ejercicio 1."<<endl;
		cout<<"2- Ejercicio 2."<<endl;
		cout<<"3- Ejercicio 3."<<endl;
		cout<<"4- Ejercicio 4."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			ejercicio_1();
			break;
		case 2:
			ejercicio_2();
			break;
		case 3:
			ejercicio_3();
			break;
		case 4:
			ejercicio_4();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}


//int menuMatrices_2();
int menuMatrices_2(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU MATRICES (1)=\n"<<endl;
		
		cout<<"1- Ejercicio 5."<<endl;
		cout<<"2- Ejercicio 6."<<endl;
		cout<<"3- Ejercicio 7."<<endl;
		cout<<"4- Ejercicio 8."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			ejercicio_5();
			break;
		case 2:
			ejercicio_6();
			break;
		case 3:
			ejercicio_7();
			break;
		case 4:
			ejercicio_8();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}


//int menuMatrices_3();
int menuMatrices_3(){	
	int op1;
	int salir=1;
	while(salir==1){
	
		cout<<"\n==================================================="<<endl;
		cout<<"= MENU MATRICES (1)=\n"<<endl;
		
		cout<<"1- Ejercicio 9."<<endl;
		cout<<"2- Ejercicio 10."<<endl;
		cout<<"3- Ejercicio 11."<<endl;
		cout<<"4- Ejercicio 12."<<endl;
		cout<<"5- Regresar."<<endl;
		
		cout<<"\nIngrese una opcion (mM_123): ";cin>>op1;
		
		switch(op1){
		case 1:
			ejercicio_9();
			break;
		case 2:
			ejercicio_10();
			break;
		case 3:
			ejercicio_11();
			break;
		case 4:
			ejercicio_12();
			break;
		case 5:
			salir=0;
			break;
		}
	}	
	return 0;	
}

// EJERCICIOS VECTORES
void llenar(int vec[]){
	for(int i =0; i<a; i++){
		cout<<"("<<i+1<<"): ";cin>>vec[i];
	}
	
	
}
void primero(int vec[]){
	int contador = 0, x, mayor= 0, numero = 0, cont = 0;
	for(int posicion =0; posicion < a; posicion++){
		for(int i = 1; i <= vec[posicion]; i++){
			if(vec[posicion] % i == 0){
				contador++;
			} 
		}
		if(contador == 2){
			x = 0;
			for(int i = 0; i<a; i++){
				if( vec[posicion] == vec[i]){
					x++;
				}
			}
			if(cont == 0){
				mayor = vec[posicion];
				numero = x;
			}
			if (cont=!0){
				if(x>numero){
					mayor = vec[posicion];
					numero = x;
				}
			}
			cont++;
		}
		contador = 0;
	}
	cout<<"\nNumero primo mas veces repetido: "<<mayor<<endl; // si dos numero primos se repiten la misma cantidad de veces, se  dejara como mayor al primer primo identificado
	
}
void segundo(int vec[]){
	cout<<"\nEl vector resultante es: "<<endl;
	int aux, cont = 0;
	for(int i = 0; i<a;i++){
		if(vec[i]%2 != 0 ){
			cont++;
			aux = vec[i];
			cout<<"("<<cont<<"): "<<aux<<endl;	
		}
		
	}
}
void tercero(int vec[]){
int num, i, pos, aux;
cout<<"Cuantos datos desea ingresar: ";cin>>num;
int b = a + num;
int vec2[b];
for( i = 0; i<a; i++){
	vec2[i]= vec[i];
}
for(int i = a;i<b;i++){
	cout<<"Ingrese dato: ";cin>>vec2[i];
}
	
	for(i = 0; i <b; i++){
		pos = i;
		aux = vec2[i];	
		while((pos>0)&&(vec2[pos-1]>aux)){
			vec2[pos] = vec2[pos-1];	
			pos--;
		}
		vec2[pos] = aux;
	}
	cout<<"\nVector ordenado: "<<endl;
	for(i=0;i<b;i++){
		cout<<"("<<i+1<<"): "<<vec2[i]<<endl;	
	}		
}
void quinto(){
	int a, b, pos, aux, i, c, it;
	cout<<"Ingrese la longitud del primer vector: ";cin>>a;
	int vector1[a];
	cout<<"\nDatos del primer vector: \n";
	for( i = 0; i<a;i++){
		cout<<"("<<i+1<<"): ";cin>>vector1[i];
	}
	cout<<"\nIngrese la longitud del segundo vector: ";cin>>b;
	c = a+b;
	int vector2[b];
	int vector3[c];
	cout<<"\nDatos del segundo vector: \n";
	for(i = 0; i<b;i++){
		cout<<"("<<i+1<<"): ";cin>>vector2[i];
	}
	//Ordenando los dos vectores
	for(i = 0; i <a; i++){
		pos = i;
		aux = vector1[i];	
		while((pos>0)&&(vector1[pos-1]>aux)){
			vector1[pos] = vector1[pos-1];	
			pos--;
		}
		vector1[pos] = aux;
	}
	for(i = 0; i <b; i++){
		pos = i;
		aux = vector2[i];	
		while((pos>0)&&(vector2[pos-1]>aux)){
			vector2[pos] = vector2[pos-1];	
			pos--;
		}
		vector2[pos] = aux;
	}
	cout<<"Vector 1: "<<endl;
	for(i=0;i<a;i++){
		cout<<"("<<i+1<<"): "<<vector1[i]<<endl;	
	}
	cout<<"Vector 2: "<<endl;
	for(i = b-1 ;i>=0;i--){
		cout<<"("<<i<<"): "<<vector2[i]<<endl;	
	}
	//copiando los elementos de vector1 a vector 3
	for(int i =0;i<a;i++){
		vector3[i] = vector1[i];
	}
	//copiando los elementos de vector2 a vector3
	for(int i = a; i<c;i++){
		vector3[i] = vector2[i-a];
	}
	// Mostrando el tercer vector ordenado por mezcla
	for(int i = 0; i<=c-1;i++){
		for(int j = 0; j<c-1;j++){
			if (vector3[j]<vector3[j+1]){
				it=vector3[j];
				vector3[j]=vector3[j+1];
				vector3[j+1]=it;
			}
		}
	}
	cout<<"\nVector ordenado por mezcla de forma descendente\n"<<endl;
	for(int i = 0; i<c;i++){
		cout<<"("<<i<<"): "<<vector3[i]<<endl;
	}
}
void sexto(){
int a, b, pos, aux, i, c, it, cont = 0;
	cout<<"Ingrese la longitud del primer vector: ";cin>>a;
	int vector1[a];
	cout<<"\nDatos del primer vector: \n";
	for( i = 0; i<a;i++){
		cout<<"("<<i+1<<"): ";cin>>vector1[i];
	}
	cout<<"\nIngrese la longitud del segundo vector: ";cin>>b;
	c = a+b;
	int vector2[b];
	int vector3[c];
	cout<<"\nDatos del segundo vector: \n";
	for(i = 0; i<b;i++){
		cout<<"("<<i+1<<"): ";cin>>vector2[i];
	}
	//Ordenando y mostrando los dos vectores
	for(i = 0; i <a; i++){
		pos = i;
		aux = vector1[i];	
		while((pos>0)&&(vector1[pos-1]>aux)){
			vector1[pos] = vector1[pos-1];	
			pos--;
		}
		vector1[pos] = aux;
	}
	for(i = 0; i <b; i++){
		pos = i;
		aux = vector2[i];	
		while((pos>0)&&(vector2[pos-1]>aux)){
			vector2[pos] = vector2[pos-1];	
			pos--;
		}
		vector2[pos] = aux;
	}
	cout<<"Vector 1: "<<endl;
	for(i=0;i<a;i++){
		cout<<"("<<i+1<<"): "<<vector1[i]<<endl;	
	}
	cout<<"Vector 2: "<<endl;
	for(i = b-1 ;i>=0;i--){
		cout<<"("<<i<<"): "<<vector2[i]<<endl;	
	}
	//copiando los elementos de vector1 a vector 3
	for(int i =0;i<a;i++){
		vector3[i] = vector1[i];
	}
	//copiando los elementos de vector2 a vector3
	for(int i = a; i<c;i++){
		vector3[i] = vector2[i-a];
	}
	//tercer vector ordenado por mezcla
	for(int i = 0; i<=c-1;i++){
		for(int j = 0; j<c-1;j++){
			if (vector3[j]<vector3[j+1]){
				it=vector3[j];
				vector3[j]=vector3[j+1];
				vector3[j+1]=it;
			}
		}
	}
	cout<<"\nVector ordenado por mezcla de forma descendente mostrando solo los pares \n"<<endl;
	for(int i = 0; i<c;i++){
		if( vector3[i]%2 == 0){
			cont++;
			cout<<"("<<cont<<"): "<<vector3[i]<<endl;
		}	
	}	
	
}
void septimo(){
	int longi,cont = 0, a, b, t, mayor,menor, cont3 = 0;
	cout<<"Ingrese la longitud del vector: ";cin>>longi;
	int vector1[longi];
	for(int i = 0; i<longi;i++){
		cout<<"("<<i+1<<"): ";cin>>vector1[i];     //Se pide la longitud y se llena el vector
	}
	for(int i = 0; i<longi;i++){
		a = 0;
		b = 1;
		t = 0;
		while(t<vector1[i]){
			t = a+b;
			a = b;
			b = t;
		}
		if(t == vector1[i]){           // se identifican los fibonaccis pasando por cada uno de los elementos del vector y se inicializa un contador
			if(cont == 0){             // si el contador es igual a 0; el primer valor sera el mayor y el menor
				mayor = vector1[i];
				menor = vector1[i];
			}else if(cont != 0){               // cuando el contador sea diferente de cero se  procede a comparar el elemento del vector con la variable mayor y menor anterior
				if(vector1[i]> mayor){         // si se cumple la condicion el elemento del vector se almacena en la variable mayor o menor correspondiente
					mayor = vector1[i];
				}
				if(vector1[i]<menor){
					menor = vector1[i];	
				}
			}
			cont++;	
		}
		
	}
	cout<<"\nLimite inferior: "<<menor<<endl;   //para mayor claridad al usuario se proce a mostrar cada uno de los valores
	cout<<"\nLimite superior: "<<mayor<<endl;
	
	for(int i = menor; i<=mayor; i++){
		int cont2 = 0;
		for(int j = 1; j<=mayor;j++){          //Se establece un rango desde el menor hasta el mayor encontrados
			if(i%j == 0){                      
				cont2++;                       
			}
		}                                       // se evalua si los numeros en dicho rango son primos
		if(cont2 == 2){                        // se cuenta cuantos primos son
			cont3++;	
		}
	}
	int primos[cont3];                         // se establece un vector con la longitud fijada en cuantos primos hay en el rango inicial
	
	int k = 0;
	
	while(k < cont3){
	for(int i = menor; i<=mayor; i++){                  //Se repite el ciclo anterior con la diferencia de
		int cont2 = 0;                                 // estar en un ciclo while con una variable k inicializada en 0 hasta que sea menor que la longitud del vector de primos
		for(int j = 1; j<=mayor;j++){                  // cada vez que encuentre un primo este se almacenara en la posicion k del vector que este en ese momento
			if(i%j == 0){                              // K se incrementa hasta romper el ciclo significando que ele vector esta lleno
				cont2++;
			}
		}
		if(cont2 == 2){
			primos[k] = i;
			k++;	
		}
	}	
	}
	
	cout<<"\nVector de primos: "<<endl;               // Se muestra el vector de primos
	for(int i = 0; i<cont3; i++){
		cout<<"("<<i+1<<"): "<<primos[i]<<endl;
	}
}	
void octavo(){
int longi,cont = 0, a,b,t,segundo, tercero;
	cout<<"Ingrese la longitud del vector: ";cin>>longi;
	int vector1[longi];
	for(int i = 0; i<longi;i++){                      //Se pide la longitud del vector y se  llena el vector
		cout<<"("<<i+1<<"): ";cin>>vector1[i];
	}
	for(int i = 0; i<longi;i++){
		a = 0;
		b = 1;
		t = 0;
		while(t<vector1[i]){  //En el ciclo for y en el ciclo while pasando por cada uno de los elementos del vector se identifican los fibonacci
			t = a+b;
			a = b;
			b = t;
		}
		if(t == vector1[i]){
			cont++;
			if(cont == 2){
				segundo = t;
			}                //En este condicional al haber identificado los fibonacci, se cuenta el segundo(se almacena en una variable) asi mismo con el tercero 
			if(cont == 3){
				tercero = t;
			}
		}
			
	}
	cout<<"\nel segundo fibonacci es: "<<segundo<<endl;
	cout<<"El tercer fibonacci es: "<<tercero<<endl;
	cout<<"\n"<<endl;
	
	if( segundo == tercero){
		cout<<"\nAmbos fibonacci son iguales por lo tanto no hay un rango a evaluar"<<endl;// si el segundo y tercer fibonacci son iguales se muestra el mensaje y se sale del programa
	}
	if(segundo<tercero){                                //Se establece el rango a evaluar
		int longitud = 0;
		float suma = 0;                               
		for(int i = segundo; i<=tercero;i++ ){
			if( i%3 == 0){
				suma = suma+i;
				longitud++;	                            // Se cuenta cuantos multiplos de tres existen en el rango
			}
		}
		float prom = suma/longitud;
		cout<<"En el rango hay: "<<longitud<<" numeros divisibles entre 3"<<endl;
		cout<<"El promedio de los numeros divisibles entre tres es: "<<prom<<endl;	
	}
	if(tercero < segundo){                          // Se establece el rango a evaluar
		int longitud = 0;
		float suma = 0;
		for(int i = tercero; i<=segundo;i++){
			if( i%3 == 0){
				longitud++;	
				suma = suma + i;                       //Se cuenta cuantos multiplos de tres existen en el rango
			}
		}
		float prom = suma/longitud;
		cout<<"En el rango hay: "<<longitud<<" numeros divisibles entre 3"<<endl;
		cout<<"El promedio de los numeros divisibles entre tres es: "<<prom<<endl;	
	}	
}


// EJERCICIOS MATRICES.
	// EJERCICIO 1:
int ejercicio_1(){
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
	// EJERCICIO 2
int ejercicio_2(){
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

	// EJERCICIO 3
int ejercicio_3(){
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
	// EJERCICIO 4
int ejercicio_4(){
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
	// EJERCICIO 5
int ejercicio_5(){
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
	// EJERCICIO 6
int ejercicio_6(){
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
	// EJERCICIO 7
int ejercicio_7(){
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
	// EJERCICIO 8
int ejercicio_8(){
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
}
	// EJERCICIO 9
int ejercicio_9(){
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
	int primo2;
	int primo4;
	
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
				if(contp==2){
					primo2=matrix[i][j];
				}
				if(contp==4){
					primo4=matrix[i][j];
				}
			}
		}
	} 
	
	cout<<"\n";
	for(int i=0;i<contp;i++){
		cout<<"Vector Primos: "<<vector_primos[i]<<endl;
	}
	cout<<endl;
	cout<<"Segundo primo encontrado:"<<primo2<<endl;
	cout<<"Cuarto primo encontrado:"<<primo4<<endl;
	
	int auxM;
	int auxm;
	if(primo2>primo4){
		auxM=primo2;
		auxm=primo4;
	}else{
		auxM=primo4;
		auxm=primo2;
	}
	
	// ¿SON CONSECUTIVOS?
	contp=0;
	int vector_pI[10];
	for(int i=auxm+1;i<auxM-1;i++){
		contd=0;
		for(int k=1;k<=i;k++){
			div=i%k;
			if(div==0){
				contd++;
			}
		}
		if(contd==2){
			vector_pI[contp]=i;
			contp++;
			
		}
	}
	cout<<endl;
	if(contp>0){
		cout<<"==> Los dos primos NO son consecutivos: "<<endl;
	}else{
		cout<<"==> Los dos primos son consecutivos: "<<endl;
	}
}
	// EJERCICIO 10
int ejercicio_10(){
	int f,c	;
	cout<<endl;
	cout<<"Ingrese el numero de filas de la matriz: ";cin>>f;
	cout<<"Ingrese el numero de columnas de la matriz : ";cin>>c;
	int matrix[f][c];
	int vector_aux[f];
	
	cout<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Ingrese el elemento ("<<i<<","<<j<<"): ";cin>>matrix[i][j];
			vector_aux[j]=matrix[i][j];
		}	
	}
	cout<<"\n";
	for(int i=0;i<f;i++){
		cout<<"Vector: "<<vector_aux[i]<<endl;
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
	
	cout<<"\n";
	vector_aux[f];
	for(int j=0;j<c;j++){
		for(int i=0;i<f;i++){
			vector_aux[f]=matrix[i][j];
			
		}
	}
	cout<<"\n";
	for(int i=0;i<f;i++){
		cout<<"Vector: "<<vector_aux[i]<<endl;
	}
}
	// EJERCICIO 11;
int ejercicio_11(){
	int f1,c1,f2,c2;

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
    }
}
	// EJERCICIO 12
int ejercicio_12(){
	int f,c	;
	cout<<endl;
	cout<<"Ingrese el numero de filas de la matriz: ";cin>>f;
	cout<<"Ingrese el numero de columnas de la matriz : ";cin>>c;
	int matrix[f][c];
	float vector[c];
	
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
	// PROMEDIO DE LAS FILAS DE LA MATRIZ
	float suma=0;
	for(int i=0;i<f;i++){
		suma=0;
		for(int j=0;j<c;j++){
			suma+=matrix[i][j];		
		}
		vector[i]=suma;
	}
	
	cout<<"\n";
	for(int i=0;i<c;i++){
		cout<<"Suma f"<<i<<": "<<vector[i]<<endl;
	}
	float vector_prom[c];
	for(int i=0;i<c;i++){
		vector_prom[i]=vector[i]/f;
	}
	
	// MATRIZ AUXILIAR
	int matrix_aux[f][c];
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			matrix_aux[i][j]=matrix[i][j];
		}
	}
	
	// OREDENAMIENTO
	int pos;
	float aux;
	for(int i=0;i<c;i++){
		pos=i;
		aux=vector[i];
		
		while((pos>0)and(vector[pos-1]>aux)){
			vector[pos]=vector[pos-1];
			pos--;
		}
		
		vector[pos]=aux;	
	}
	

	// EXTRACION DE LAS COLUMNAS EN ORDEN ASCENDENTE DE ACUERDO A LAS SUMAS (promedios)
	int vector_fila[f];
	suma=0;
	for(int k=0;k<f;k++){
		for(int i=0;i<f;i++){
			suma=0;
			for(int j=0;j<c;j++){
				suma+=matrix[i][j];		
			}
			if(vector[k]==suma){
				vector_fila[k]=i;	
			}	
		}
	}
	
	cout<<"\n";
	cout<<" PROMEDIOS ORDENADOS (sumas)- COORDENADA FILA"<<endl;
	for(int i=0;i<c;i++){
		cout<<"Suma f"<<i<<":"<<vector[i]<<" ==> "<<"Fila:  "<<vector_fila[i]<<endl;
		//NOTA: No es necesario hallar el promedio, con la suma basta, ya 
		//      que etre mayor sea la suma, mayor será el promedio.
	}

	// INTERCAMBIO DE FILAS
	
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			matrix_aux[i][j]=matrix[vector_fila[i]][j];
		}
	}
	
	// IMPRESION DE LA MATRIZ ORDENADA
	cout<<"\n";
	cout<<" == MATRIZ ORDENADA: == "<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<matrix_aux[i][j]<<"  ";
		}
		cout<<endl;	
	}
}
// EJERCICIOS VECTORES
int ContarCaracter(){
	char frase[250]; 
	char x;
	cout<<"Ingrese una frase (hasta 250 caracteres max)"<<endl;
	cin.ignore(256, '\n');
	cin.getline(frase, 250);
	cout<<"Ingrese el caracter del que quiera saber cuantas veces aparecio"<<endl;
	cin>>x;
	
	int contador = 0;
	
	for (int i=0; i<strlen(frase);i++){
		if (frase[i] == x){
			contador+=1;
		}
	}
	cout<<"en la frase: "<<frase<<"  aparece "<<x<<" "<<contador<<" veces"<<endl;
}

int CaracterRepetido(){
	char frase[250];
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	
	cout<<"Ingrese la frase (hasta 250 caracteres max)"<<endl;
	cin.ignore(256, '\n');
	cin.getline(frase,250);
	
	for(int i=0;i<strlen(frase);i++){
		switch(frase[i]){
			case 'a': a++; break;
			case 'b': b++; break;
			case 'c': c++; break;
			case 'd': d++; break;
			case 'e': e++; break; 
			case 'f': f++; break;
			case 'g': g++; break;
			case 'h': h++; break;
			case 'i': i++; break;
			case 'j': j++; break;
			case 'k': k++; break;
			case 'l': l++; break;
			case 'm': m++; break;
			case 'n': n++; break;
			case 'o': o++; break;
			case 'p': p++; break;
			case 'q': q++; break;
			case 'r': r++; break;
			case 's': s++; break;
			case 't': t++; break;
			case 'u': u++; break;
			case 'v': v++; break;
			case 'w': w++; break;
			case 'x': x++; break;
			case 'y': y++; break;
			case 'z': z++; break;
		}
	}
	
	
	cout<<"Letra a: "<<a<<endl;
	cout<<"Letra b: "<<b<<endl;
	cout<<"Letra c: "<<c<<endl;
	cout<<"Letra d: "<<d<<endl;
	cout<<"Letra e: "<<e<<endl;
	cout<<"Letra f: "<<f<<endl;
	cout<<"Letra g: "<<g<<endl;
	cout<<"Letra h: "<<h<<endl;
	cout<<"Letra i: "<<i<<endl;
	cout<<"Letra j: "<<j<<endl;
	cout<<"Letra k: "<<k<<endl;
	cout<<"Letra l: "<<l<<endl;
	cout<<"Letra m: "<<m<<endl;
	cout<<"Letra n: "<<n<<endl;
	cout<<"Letra o: "<<o<<endl;
	cout<<"Letra p: "<<p<<endl;
	cout<<"Letra q: "<<q<<endl;
	cout<<"Letra r: "<<r<<endl;
	cout<<"Letra s: "<<s<<endl;
	cout<<"Letra t: "<<t<<endl;
	cout<<"Letra u: "<<u<<endl;
	cout<<"Letra v: "<<v<<endl;
	cout<<"Letra w: "<<w<<endl;
	cout<<"Letra x: "<<x<<endl;
	cout<<"Letra y: "<<y<<endl;
	cout<<"Letra z: "<<z<<endl;
	
}

int CaracterMasRepetido(){
	char frase[250];
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	int lon;
	
	cout<<"Ingrese la frase (hasta 250 caracteres max)"<<endl;
	cin.ignore(256, '\n');
	cin.getline(frase,250);
	
	lon=strlen(frase);
	int mayor=0;
	char aux;	
	for(int i=0;i<lon;i++){
		switch(frase[i]){
			case 'a': a++;
			if(a>mayor){
				mayor=a;
				aux=frase[i];};break;
				
			case 'b': b++; 
			if(b>mayor){
				mayor=b;
				aux=frase[i];} break;
				
			case 'c': c++; 
			if(c>mayor){
				mayor=c;
				aux=frase[i];} break;
				
			case 'd': d++;
			if(d>mayor){
				mayor=d;
				aux=frase[i];};break;
			
			case 'e': e++;
			if(e>mayor){
				mayor=e;
				aux=frase[i];};break;
			
			case 'f': f++;
			if(f>mayor){
				mayor=f;
				aux=frase[i];};break;
			
			case 'g': g++;
			if(g>mayor){
				mayor=g;
				aux=frase[i];};break;
			
			case 'h': h++;
			if(h>mayor){
				mayor=i;
				aux=frase[i];};break;
			
			case 'i': i++;
			if(i>mayor){
				mayor=i;
				aux=frase[i];};break;
			
			case 'j': j++;
			if(j>mayor){
				mayor=j;
				aux=frase[i];};break;
			
			case 'k': k++;
			if(k>mayor){
				mayor=k;
				aux=frase[i];};break;
			
			case 'l': l++;
			if(l>mayor){
				mayor=l;
				aux=frase[i];};break;
			
			case 'm': m++;
			if(m>mayor){
				mayor=m;
				aux=frase[i];};break;
			
			case 'n': n++;
			if(n>mayor){
				mayor=n;
				aux=frase[i];};break;
			
			case 'o': o++;
			if(o>mayor){
				mayor=o;
				aux=frase[i];};break;
			
			case 'p': p++;
			if(p>mayor){
				mayor=p;
				aux=frase[i];};break;
			
			case 'q': q++;
			if(q>mayor){
				mayor=q;
				aux=frase[i];};break;
			
			case 'r': r++;
			if(r>mayor){
				mayor=r;
				aux=frase[i];};break;
			
			case 's': s++;
			if(s>mayor){
				mayor=s;
				aux=frase[i];};break;
			
			case 't': t++;
			if(t>mayor){
				mayor=t;
				aux=frase[i];};break;
				
			case 'u': u++;
			if(u>mayor){
				mayor=u;
				aux=frase[i];};break;
				
			case 'v': v++;
			if(v>mayor){
				mayor=v;
				aux=frase[i];};break;
				
			case 'w': w++;
			if(w>mayor){
				mayor=w;
				aux=frase[i];};break;
				
			case 'x': x++;
			if(x>mayor){
				mayor=x;
				aux=frase[i];};break;
				
			case 'y': y++;
			if(y>mayor){
				mayor=y;
				aux=frase[i];};break;
			
			case 'z': z++;
			if(z>mayor){
				mayor=z;
				aux=frase[i];};break;					
		}
}
	
cout<<"El caracter que mas se repite es: "<<aux<<" con "<<mayor<<" repeticiones "<<endl;
	
	
	getch();
	return 0;
}

char CadenaAlfa(){
	
	char cad1[250],cad2[250], cad3[250] = "                ";
    cout << "ingrese la primera frase (hasta 250 caracteres): "<<endl;
    cin.ignore(256, '\n');
    gets(cad1);
    cout << "ingrese la segunda frase (hasta 250 caracteres): "<<endl;
    gets(cad2);
    

    int bol = 0;
    int bol2 = 0;
    int cc = 0;
    for(int i = 0; i < strlen(cad1); i++){
        bol = 0;
        bol2 = 0; 

        if (i >= 1)
        {
            for (int j = 0; j < i; j ++){
                if(cad1[j] == cad1[i]){
                    bol2 = 1;
                }
            }        
        }
            
        for(int j = 0; j < strlen(cad2); j++){
            if(cad1[i] == cad2[j]){
                bol = 1; 
            }

        }
            
        if(bol && !bol2){
            cad3[cc] = cad1[i];
            cc++; 
    }

 }	
	 cout << "Caracteres repetidos: " << cad3 << "\n"; 
	 strupr(cad3);
	 cout << "Caracteres en Mayusculas: " <<cad3  << "\n";
	 strlwr(cad3);
	 cout << "Caracteres en Minusculas: " << cad3 << "\n";
}

int EnteroLargo(){
    char frase[250];
    cout << "ingrese cadena de caracteres: ";
    cin.ignore(256, '\n');
    gets(frase);
    
    int numeros = 0;
    
    for(int i = 0; i <strlen(frase); i++){
        if(isdigit(frase[i])){
            numeros +=1 ;
        }
    }
    cout<<"El total de numeros ingresados son: "<<numeros<<endl;
    
    char enteroLargo[numeros];
    int n = 0;
    
    for(int i = 0; i < strlen(frase); i++){
        if (isdigit(frase[i])){ 
            enteroLargo[n] = frase[i];
            n += 1;
        }
    }
    for(int i =0; i < (n); i++){
        cout << "Los numeros ingresados son: "<<enteroLargo[i]<<endl;
    }

    cout << "\nnumero conseguido: "<< atoi(enteroLargo);    
}

char CadenasOrdenadas(){
	int cn;
	char  nomaux[30];
	
	cout<<"Cantidad de nombres ";
	cin>>cn;
	char nombres[cn][30];
	
	gets(nomaux); 
	for(int i=0;i<cn;i++){
		cout<<"nombre  "<<i<<"-> ";
		gets(nombres[i]);
	}
	
	cout<<"\nVector antes de ordenar \n"<<endl;
	for(int i=0;i<cn;i++){	
		cout<<"nombre  "<<i<<" "<<nombres[i]<<endl;
	}
	
	for (int i=0;i<cn-1;i++){
		for (int j=i+1;j<cn;j++){
		
			if(strcmp(nombres[j], nombres[i])<0){
				strcpy(nomaux, nombres[i]);
				strcpy(nombres[i] ,nombres[j]);
				strcpy(nombres[j] ,nomaux);
			}
		}
	}
	cout<<"\nVector odenado \n"<<endl;
	for(int i=0;i<cn;i++){
		
		cout<<"nombre  "<<i<<" "<<nombres[i]<<endl;
	}
}

char septimoCad(){
	int b, z ,j,cd,cd2;
	char nombre[30];
	char nombre2[30];
	cout<<"digite la primer cadena ->";
	cin.ignore(256, '\n');
	cin.getline(nombre,38);
		cout<<"digite la segunda cadena ->";
	cin.getline(nombre2,38);
	cd=strlen(nombre);
	cd2=strlen(nombre2);
	cout<<"Las cadenas ingresadas son:\n[1]  = "<<nombre<<" \n"; 
	cout<<"[2]  = "<<nombre2<<" \n\n"; 
	b=0;
	z=0;
	j=0;
	char cadena[8];
	char s[]=".";
	for(int i=0;i<cd;i++){
		if(nombre[i]>=48&&nombre[i]<=57 && z==0){
			b=b+1;
			cadena[j]=nombre[i];
			j=j+1;
			if(b==4){
				z=1;
				cadena[j]=s[0];	
			}
		}
	}
	for(int i=0;i<cd2;i++){
		if(nombre2[i]>=48&&nombre2[i]<=57 && z==1){
			b=b+1;
			j=j+1;
			cadena[j]=nombre2[i];
			if(b==7){
				z=2;	
			}
		}
	}
	for(j=0;j<8;j++){
		cout<<cadena[j];
	}
}

char octavoCad(){
	int b, z,l,h ,j=0,cd;
	char nombre[100];
	cout<<"digite la primer cadena ->";
	cin.ignore(256, '\n');
	cin.getline(nombre,102);
	cd=strlen(nombre);
	cout<<"Las cadena ingresada es:\n[1]  = "<<nombre<<" \n"; 

	char cadena[cd];
	char cadena2[cd];
	char cadena3[cd];
	for(int i=0;i<cd;i++){
		if(nombre[i]>=48&&nombre[i]<=57){
			cadena[j]=nombre[i];
			j=j+1;
		
			}
		}
        int n= 0;
			for(int i=0;i<cd;i++){		
				if(nombre[i]>=65&&nombre[i]<=90){
						cadena2[n]=nombre[i];
						n=n+1;
			  }
       		}
        int J= 0;
			for(int i=0;i<cd;i++){
				if(nombre[i]>=97&&nombre[i]<=122){
						cadena3[J]=nombre[i];
						J=J+1;
							
						
				}
				
			
			}
		int nn = j;
        cout << "\n\n   vector numero   \n";
		for(int j=0;j<cd;j++){
			cout<<"\n numeros "<< j+1<<": "<<cadena[j];
			//cout<<"\nLetras Mayusculas  "<<"   "<<cadena2[j];
			//cout<<"\nletras Minusculas  "<<"   "<<cadena3[j];
	    }	
		cout << "\n\n   vector Mayusculas  \n";
        for(int j=0;j<cd;j++){
				//cout<<"\nvalor cadena numeros"<<"   "<<cadena[j];
				cout<<"\n Mayusculas "<< j+1<<": "<<cadena2[j];
				//cout<<"\nletras Minusculas  "<<"   "<<cadena3[j];
	    }
        cout << "\n\n  vector Minusculas  \n";
        for(int j=0;j<cd;j++){
				//cout<<"\nvalor cadena numeros"<<"   "<<cadena[j];
				//cout<<"\nLetras Mayusculas  "<<"   "<<cadena2[j];
				cout<<"\n Minusculas " << j+1<<": "<<cadena3[j];
	    }
}

