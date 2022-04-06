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
	//Este algoritmo forma un vector ordenado a partir de dos matrices que están ordenadas
	int cn;
	char  nomaux[30];
	
	cout<<"Cantidad de nombres ";
	cin>>cn;
	char nombres[cn][30];
	// leer vector
	gets(nomaux); //limpiar el buffer
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

int main(){
	bool valor = true;
	int opc,opc1,opc2,opc3;
	cout<<"Bienvenido al menu de seleccion de ejercicios con cadenas"<<"\n"<<"Por favor seleccione primero el menu presione enter y luego el ejercicio segun las primeras indicaciones.";
	cout<<endl;
	cout<<"1 primeros 3 ejercicios (1. 1, 2. 2, 3. 3)"<<endl<<"2 ejercicios 4,5,6 (1. 4, 2. 5, 3. 6)"<<endl<<"3 ejercicio 7,8 (1. 7, 2. 8)"<<endl;
	cin>>opc;
	//implementacion del switch principal primer menu de primeros puntos o segundos, previamente a eso los menus de los ejercicios.
	switch(opc)
	{	
		case 1:
			cin>>opc1;
			switch(opc1)
	//unicamente funcionamiento de los ejercicios para optimizar los ejercicios, el menu se ira actualizando
			{
				case 1: cout<<"Ejercicio 1: "<<"Determinar en una cadena donde hay varios caracteres repetidos, cuantas veces se repite cada caracter."
				<<endl;
				cout<<endl;
				CaracterRepetido();
				break;
				
				case 2: cout<<"Ejercicio 2: "<<"Determinar cuantas veces aparece un caracter dado en una cadena."<<endl;
				cout<<endl;
				ContarCaracter();
				break;
				
				case 3: cout<<"Ejercicio 3: "<<"En una cadena de caracteres donde hay varios repetidos, "
				<<"determinar cual es el caracter que más se repite y las veces que lo hace."<<endl;
				cout<<endl;
				CaracterMasRepetido();
				break;
				
				case 4: break;
			}
			break;
		case 2:
			cin>>opc2;
			switch(opc2)
			{
				case 1: cout<<"Ejercicio 4: "<<"Realizar un  programa que permita leer dos cadenas de caracteres alfanuméricos, "
				<<"y obtener una nueva cadena con los elementos comunes de las dos cadenas y mostrarlos en mayúsculas y minúsculas."<<endl;
				CadenaAlfa();
				break;
				
				case 2: cout<<"Ejercicio 5: "<<"Se tiene una cadena donde hay letras y digitos, extraer los digitos en una cadena y convertirlo a entero largo."<<endl;
				EnteroLargo();
				break;
				
				case 3: cout<<"Ejercicio 6: "<<"Se tiene un arreglo de cadenas, determinar la cadena que alfabeticamente seria la primera y su posicion en el arreglo."<<endl;
				CadenasOrdenadas();
				break;
				case 4: cout<<"Ejercicio 7";
				septimoCad();
				break;
				case 5: cout <<"Ejercicio 8";
				octavoCad();
				break;
			}
			break;
	}
	
}

