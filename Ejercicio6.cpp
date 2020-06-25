#include "iostream"
#include "cstdlib"

using namespace std;

int main (){

    int tamano = 0;
    int repite, numero, s, con = 0;

    cout <<"Por favor ponga el cuantos numeros quiere almacenar: "<<endl;
    cin>>tamano;

    int arreglo[tamano];

    for (int i=0;i<tamano;i++)
    {
        cout <<"Por favor ingrese un numero: "<<endl<<endl;
        cin>>arreglo[i]; // se ingresa todos los valores para despues poder buscar el numero que se repite 
        cout <<endl;
    }

    cout <<"por favor ingrese el numero que quiera saber cuantas veces se repite: "<<endl;
    cin>>numero;

    for (int i = 0;i<tamano;i++) 
    {
        if (numero == arreglo[i]) // forma para saber si el numero se repite 
        {
            con++;
        }
    } 

    cout<<endl;
    cout <<"el numero "<<numero<<" que usted selecciono, se repite "<<con<<" veces"<<endl<<endl;

    system ("pause");
    return 0;
       
}