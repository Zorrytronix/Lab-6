#include "iostream"
#include "cstdlib"

using namespace std;

int main (){

    cout <<"estos son los primeros 100 numeros impares "<<endl<<endl;

     int arr[100];

    for (int i = 201;i>=1;i= i-2) //forma de crear numeros impares
    {
        cout <<i<<", ";
    }

    cout<<endl<<endl;
    system ("pause");
    return 0;

}
