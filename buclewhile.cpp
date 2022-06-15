#include <iostream> 

using namespace std;

int main()
{
    cout<<"Ejemplo del buvle while";
    
    int i=0;
    while (i < 10)
    {
        i++;
        cout<<endl<<"Mensaje  # :" << i;
        cout<<endl<<"El cuadrado de i: " << (i * i);
    }
    //Se pide por teclado un numero entero que debe estar entre 1 y 30.
    //Este nu8mero representa la tabla que el usuario desea generar.
    //Se pide con un buble while generar la tabla de multiplicar
    return 0;
    
}