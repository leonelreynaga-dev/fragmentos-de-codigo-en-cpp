#include <iostream>
using namespace std;

int main() {
    int Posicion, Pasadas, Aux, CENTRAL, X, PRIMERO, ULTIMO, Buscar, Encontrado;
    X = 11; CENTRAL = 0; Encontrado = -1;
    PRIMERO = 0; ULTIMO = X - 1;
    int A[X];
    for (Posicion = 0; Posicion < X; Posicion++) 
	{
        cout << "Ingrese numero:";
        cin >> A[Posicion];
    }

    cout << "Que valor desea buscar?";
    cin >> Buscar;

    for (Pasadas = 1; Pasadas < X; Pasadas++)//ordenamiento de vectores
    {
        for (Posicion = 0; Posicion < X - Pasadas; Posicion++)
        {
            if (A[Posicion] > A[Posicion + 1]) 
			{
                Aux = A[Posicion];
                A[Posicion] = A[Posicion + 1];
                A[Posicion + 1] = Aux;
            }
        } 
    }
	while (PRIMERO <= ULTIMO && Encontrado == -1) //busqueda
	{
        CENTRAL = (PRIMERO + ULTIMO) / 2;
        if (Buscar == A[CENTRAL])
            Encontrado = CENTRAL;
        else if (Buscar > A[CENTRAL])
            PRIMERO = CENTRAL + 1;
        else
            ULTIMO = CENTRAL - 1;
    }
    if (Encontrado == -1)//determinar si se encontro o no
    {
        cout << "El valor " << Buscar << " no se encuentra";
    }
    else
    {
        cout << "El valor " << Buscar << " se encuentra en la lista en la posicion:" << Encontrado;
	}
    return 0;
}

