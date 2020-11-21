#include <iostream>
#include <stdlib.h>
#include "pilascolas.h"


using namespace std;

int main()
{

    Cola cola;
    Pila pila;
    Auto coche1 = ("3547T12","Ateca","Blanco","FI");
    Auto coche2 = ("4213T12","Ibiza","Negro","FF");
    Auto coche;

        cola.encolar(coche1);
        cout << "Encolando: " << coche1.n_bastidor << endl;
        cola.ecolar(coche2);
        cout << "Encolando: " << coche2.n_bastidor << endl;

        coche = cola.desencolar();
        cout << "Desencolar: " << coche.n_bastidor << endl;

        cout << "Apilando: " << coche.n_bastidor << endl;
        pila.apilar(coche);
        cout << "Apilando: " << coche2.n_bastidor: << endl;
        pila.apilar(coche2);

        coche = pila.desapilar();
        cout << "Desapilando: " << coche.n_bastidor << endl;
        cout << "Desapilando: " << coche.n_bastidor << " " << coche.modelo << " " << coche.color << " " << coche.estado << endl;

return 0;
}
