#include "pilascolas.h"

using namespace std;

Pila::~Pila()
{
    while(cima) desapilar();
}

void Pila::apilar(Auto v)
{
    pNodo nuevo;

    nuevo = new Nodo(v, cima);

    cima = nuevo;
}

Auto Pila::desapilar()
{
    pNodo nodo;
    Auto v;
    Auto vnull(" "," "," ");

    if(!cima) return vnull;

    nodo = cima;

    cima = nodo -> siguiente;

    v = nodo -> valor;

    delete nodo;

    return v;
}

Cola::~Cola()
{
    while(primero) desencolar();
}

void Cola:encolar(Auto v)
{
    pNodo nuevo;

    nuevo = new Nodo(v);

    if(ultimo) ultimo->siguiente = nuevo;

    ultimo = nuevo;

    if(!primero) primero = nuevo;
}

Auto Cola:desencolar(){
    pNodo nodo:
    Auto v;
    Auto vnull;

    nodo = primero

    if(!nodo) return vnull;
    primero = nodo -> siguiente;
}
