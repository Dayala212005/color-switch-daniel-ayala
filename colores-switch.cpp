//Escriba un programa, en el que el usuario ingrese una letra y el programa diga el color segun la tabla
//R=rojo Y=amarillo B=azul W=blanco K=negro C=cian G=verde
//Daniel Alexander Ayala Escobar 00045824


#include <iostream>
using namespace std;
int main(){

  char letra;
  cout<<"Escribe una de las siguientes letras para mostrar el color que representan\n";
  cout<<"R ,Y ,B ,W ,K ,C ,G\n";
  cin>>letra;
  switch (letra)
  {
  case 'R': 
   cout<<"El color es rojo";
    break;

  case 'Y':
  cout<<"El color es amarillo";
  break;
  
  case 'B':
  cout<<"El color es azul";
  break;

  case 'W':
  cout<<"El color es blanco";
  break;

  case 'K':
  cout<<"El color es negro";
  break;

  case 'C':
  cout<<"El color es cian";
  break;

  case 'G':
  cout<<"El color es verde";

  default:
  cout<<"Valor no valido";
    break;
  }




    return 0;
}
