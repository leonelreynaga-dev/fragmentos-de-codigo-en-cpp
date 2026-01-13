/*{ int Posicion, X, Buscar, A[X], Encontrado;
X=11; Encontrado=-1;
for( Posicion=0; Posicion<X; Posicion++)
{ printf(“Ingrese numero:”);
scanf(“%d”,&A[Posicion]);
}
Printf(“Que valor desea buscar?”); 
Scanf(“%d”,&Buscar);
Posicion=0;
While(Posicion<X && Encontrado==-1) 
{
if (A[Posicion]==Buscar)
{
Encontrado=Posicion;
}
Posicion=Posicion+1;
}
If (Encontrado==-1) 
printf(“El valor %d no se encuentra”, Buscar);
else
printf(“el valor %d se encuentra en la lista en la posición:%d”, Buscar, Encontrado);
}
*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main() {
    int Posicion, X, Buscar, Encontrado;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> X;
    int A[X];
    Encontrado = -1;
    for (Posicion = 0;Posicion < X; Posicion++) //rellenar vectores
	{
        cout << "Ingrese los valores: ";
        cin >> A[Posicion];
    }
    cout << "¿Qué valor desea buscar? ";
    cin >> Buscar;
    Posicion = 0;
    while (Posicion < X && Encontrado == -1) 
	{
        if (A[Posicion] == Buscar) 
		{
            Encontrado = Posicion;
        }
        Posicion = Posicion + 1;
    }
    if (Encontrado == -1)
    	{
        cout << "El valor " << Buscar << " no se encuentra";
        }
    else
    	{
        cout << "El valor " << Buscar << " se encuentra en la lista en la posicion: " << Encontrado;
        }
    return 0;
}
