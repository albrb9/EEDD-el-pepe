#ifndef PILASCOLAS_H
#define PILASCOLAS_H

#include <iostream>

using namespace std;

struct Auto{
    string n_bastidor;
    string modelo;
    string color;
    string estado;
};

class Nodo
{
    private:
        Auto valor;
        Nodo *siguiente;
        friend class Pila;
        friend class Cola;
    public:
        Nodo(Auto v, Nodo *sig = NULL)
        {
        valor = v;
        siguiente = sig;
        }

};
typedef Nodo *pNodo;

class Pila
{
    private:
        pNodo cima;
    public:
        Pila() : cima(NULL) {}
        ~Pila();
        void apilar (Auto v);
        Auto despilar();
};
class Cola{
    public:
        Cola() : primero(NULL), ultimo(NULL){}
        ~Cola();
        void encolar (Auto v);
        Auto desencolar();
    private:
        pNodo primero, ultimo;
};
#endif // PILASCOLAS_H

