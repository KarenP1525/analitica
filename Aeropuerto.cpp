//KAREN PAULA MAYORGA GUERRERO A01336489
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
using namespace std;

void lectura();

int main(){
    lectura();
    return 0;
}

void lectura(){
    ifstream archivo;
    string texto;
    
    archivo.open("placas.txt",ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    int xa=0, d=0, pp=0, cf=0,a7=0,cc=0,b=0,oy=0,hc=0,a6=0,ec=0,n=0,pk=0,ja=0,v9=0,hs=0;

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
        if(texto.substr(0, 2)=="XA"){
            
            xa=xa+1;
            
        }else if(texto.substr(0, 1)=="D"){
            
            d=d+1;
        
        }else if(texto.substr(0, 2)=="PP"){
            pp=pp+1;   
        }else if(texto.substr(0, 2)=="CF"){
            cf=cf+1;   
        }else if(texto.substr(0, 2)=="A7"){
            a7=a7+1;   
        }else if(texto.substr(0, 2)=="CC"){
            cc=cc+1;   
        }else if(texto.substr(0, 1)=="B"){
            b=b+1;   
        }else if(texto.substr(0, 2)=="OY"){
            oy=oy+1;   
        }else if(texto.substr(0, 2)=="HC"){
            hc=hc+1;   
        }else if(texto.substr(0, 2)=="A6"){
            a6=a6+1;   
        }else if(texto.substr(0, 2)=="EC"){
            ec=ec+1;   
        }else if(texto.substr(0, 1)=="N"){
            n=n+1;   
        }else if(texto.substr(0, 2)=="PK"){
            pk=pk+1;   
        }else if(texto.substr(0, 2)=="JA"){
            ja=ja+1;   
        }else if(texto.substr(0, 2)=="XA"){
            xa=xa+1;   
        }else if(texto.substr(0, 2)=="9V"){
            v9=v9+1;   
        }else if(texto.substr(0, 2)=="HS"){
            hs=hs+1;   
        }

    }
        int numeros[] = {xa,d,pp,cf,a7,cc,b,oy,hc,a6,ec,n,pk,ja,v9,hs};
        string paises[] = {"México","Alemania","Brasil","Canada","Catar","Chile","China","Dinamarca","Ecuador","Emiratos Arabes","España","Estados Unidos","Indonesia","Japon","Singapur","Tailandia"};
        int mayor=numeros[0];
        int mayor2 = numeros[0];
        int mayor3 = numeros[0];
        string paisOne, paisTwo, paisT;

        for (int i = 1; i < 16; ++i){
            if (numeros[i] > mayor){

               mayor = numeros[i]; 
               paisOne=paises[i];
            } 
            
        }
        for (int i = 1; i < 16; ++i){
            if (numeros[i]!=mayor && numeros[i] > mayor2 ){
                mayor2 = numeros[i];
                paisTwo=paises[i];
            
            } 
        }
        for (int i = 1; i < 16; ++i){
            if (numeros[i]!=mayor && numeros[i]!=mayor2 && numeros[i] > mayor3 ){
                mayor3 = numeros[i]; 
                paisT=paises[i];
            }
            
        }
        cout<<"El mayor es: "<< paisOne<<endl;
        cout<<"El segundo mayor es: "<< paisTwo<<endl;
        cout<<"El tercero mayor es: "<< paisT<<endl;
        
    archivo.close();
    
}