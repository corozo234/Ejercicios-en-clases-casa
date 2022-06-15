#include <iostream>

using namespace std;

int main ()
{
    cout<<"Ejemplo del bucle for";

    int tabla =10;
    for(int k=1; k<=10; k++)
    {
        cout<<"\n"<<tabla << " X " << k <<" = " << (tabla*k);
        
    } 
    //Tabla de 3, con 9incrementos de 2 en 2

    cout<<endl<<endl<<"Tabla del 3";
    for(int k=1; k<=30; k+=2)
    {
        cout<<"\n"<<tabla << " X " << k <<" = " << (tabla*k);
    }

    //ejercicios en clase
    //Con un bucle for, genere la tabla del 7 desde el 12 al 1

    cout<<"Ejemplo del bucle for - tabla del 7 desde el 12 hasta el 1";
    tabla=7;
    for(int k=12; k>=1; k--)
    {
        cout<<"\n"<<tabla << " X " << k <<" = " << (tabla*k);
        
    } 

    return 0;
}