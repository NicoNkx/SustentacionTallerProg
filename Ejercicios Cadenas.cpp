#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstring>
#include<string.h>

using namespace std;

//implementar funciones

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
	
	cout<<"vocal a: "<<a<<endl;
	cout<<"vocal b: "<<b<<endl;
	cout<<"vocal c: "<<c<<endl;
	cout<<"vocal d: "<<d<<endl;
	cout<<"vocal e: "<<e<<endl;
	cout<<"vocal f: "<<f<<endl;
	cout<<"vocal g: "<<g<<endl;
	cout<<"vocal h: "<<h<<endl;
	cout<<"vocal i: "<<i<<endl;
	cout<<"vocal j: "<<j<<endl;
	cout<<"vocal k: "<<k<<endl;
	cout<<"vocal l: "<<l<<endl;
	cout<<"vocal m: "<<m<<endl;
	cout<<"vocal n: "<<n<<endl;
	cout<<"vocal o: "<<o<<endl;
	cout<<"vocal p: "<<p<<endl;
	cout<<"vocal q: "<<q<<endl;
	cout<<"vocal r: "<<r<<endl;
	cout<<"vocal s: "<<s<<endl;
	cout<<"vocal t: "<<t<<endl;
	cout<<"vocal u: "<<u<<endl;
	cout<<"vocal v: "<<v<<endl;
	cout<<"vocal w: "<<w<<endl;
	cout<<"vocal x: "<<x<<endl;
	cout<<"vocal y: "<<y<<endl;
	cout<<"vocal z: "<<z<<endl;
	
}

int CaracterMasRepetido(){
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
	
	// es lo mismo pero ahora tengo que ordenar los contadores para unicamente imprimir el que mas tiene en vez de imprimirlos todos
	// se me ocurre meterlos en un vector para ordenarlos con un append o tal vez tambien a un string
	// o un condional con muchas opciones de ordenamiento tengo que ver cual es la mas sencilla y optima para mis alcances.
}

int main(){
	bool valor = true;
	int opc;
	cout<<"Bienvenido al menu de seleccion de ejercicios con cadenas"<<"\n"<<"Por favor seleccione el ejercicio";
	cout<<endl;
	cout<<"1 primer ejercicio"<<endl<<"2 segundo ejercicio"<<endl<<"3 salir"<<endl;
	cin>>opc;
	//implementacion del switch principal primer menu de primeros puntos o segundos, previamente a eso los menus de los ejercicios.
	switch(opc)
	//unicamente funcionamiento de los ejercicios para optimizar los ejercicios, el menu se ira actualizando
	{
		case 1: cout<<"Ejercicio 1: "<<"Determinar en una cadena donde hay varios caracteres repetidos, cuantas veces se repite cada carácter."
		<<endl;
		cout<<endl;
		CaracterRepetido();
		break;
		
		case 2: cout<<"Ejercicio 2: "<<"Determinar cuantas veces aparece un carácter dado en una cadena."<<endl;
		cout<<endl;
		ContarCaracter();
		break;
		
		case 3: cout<<"En una cadena de caracteres donde hay varios repetidos, "
		<<"determinar cual es el carácter que más se repite y las veces que lo hace."<<endl;
		cout<<endl;
		CaracterMasRepetido();
		break;
		
	}
}

