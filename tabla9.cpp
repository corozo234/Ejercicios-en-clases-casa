#include <iostream> 

using namespace std;

int main()
{
    cout<<"\n\nEjemplo de bucle while que imprime la tabla de 9";

    int tabla=9;
    int i = 1;
    while (i<=10)
    {
        cout<<"\n" << tabla << " X " << i << " =" << (tabla * i);
        i++;
    }
    //Se pide por teclado un numero entero que debe estar entre 1 y 30.
    //Este numero representa la tabla que el usuario desea generar.
    //Se pide con un buble while generar la tabla de multiplicar
    int num;
    cout<<endl<<"Ingrese la tabla que deseas generar: ";
    cin>>num;
    if ( !(num>=1 && num<=20))
    {
        cout<<endl<<"Rango no valido...";
        return 0; //abandonar la ejecucion del programa
    }

    i=1;
    while (i<=12)
    {
        cout<<"\n" << num << " X " << i << " = " << (num * i);
        i++;
    }
     
    return 0;
    
}
