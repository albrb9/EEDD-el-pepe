#include "pilascolas.h"

using namespace std;

// --------METODOS PILA--------
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
    Auto vnull={" "," "," "," "};

    if(!cima) return vnull;

    nodo = cima;

    cima = nodo -> siguiente;

    v = nodo -> valor;

    delete nodo;

    return v;
}
int Pila::longPila()
{
    pNodo actual;
    int longitud=0;

    actual=cima;
    while (actual != NULL)
    {
        longitud++;
        actual=actual->siguiente;
    }
    return longitud;
}
void Pila::mostrarCima()
{

    if(cima) cout << "Cima : fila vacia " << endl;
    else cout << "Cima " << cima->valor.n_bastidor << endl;
}
// --------METODOS COLA---------

Cola::~Cola()
{
    while(primero) desencolar();
}

void Cola::encolar(Auto v)
{
    pNodo nuevo;

    nuevo = new Nodo(v);

    if(ultimo) ultimo->siguiente = nuevo;

    ultimo = nuevo;

    if(!primero) primero = nuevo;
}

Auto Cola::desencolar()
{
    pNodo nodo;
    Auto v;
    Auto vnull={" "," "," "," "};

    nodo = primero;

    if(!nodo) return vnull;
    primero = nodo -> siguiente;

    v = nodo -> valor;

    delete nodo;

    if(!primero) ultimo = NULL;

    return v;
}

int Cola::longCola()
{
    pNodo actual;
    int longitud = 0;

    actual=primero;
    while (actual = NULL)
    {
        longitud++;
        actual=actual->siguiente;
    }
    return longitud;
}


int num_coches = 0;
string numletr[10] ;

string generaBastidor(void)
{
    int numini,numfin,i;
    string bastidor = "";
    string numletr[]={"A","B","C","D","F","G","H","I","J"};

    numini=10+rand()%89;
    numfin=1000+num_coches;
    i=rand()%10;

    bastidor = to_string(numini) + numletr[i] + to_string(numfin);

    num_coches++;

    return bastidor;
}

Auto calcularSecuenciaAleatoria(void)
{
    int numaleat;
    Auto cochegenerado;

    string modeloauto[]={"Ibiza","Arona","Ateca","Toledo"};
    string colorauto[]={"gris","rojo","azul","neon","verde","negro","rosa"};
    string estado[]={"FI","FF","CI","CC","CF","CA"};

    numaleat=rand()%7;
    cochegenerado.n_bastidor=generaBastidor();
    numaleat=rand()%4;
    cochegenerado.modelo=modeloauto[numaleat];
    numaleat=rand()%7;
    cochegenerado.color=colorauto[numaleat];
    numaleat=rand()%6;
    cochegenerado.estado="";

    return cochegenerado;
}

int mayor(int x, int y)
{
    return x>y ? x:y;
}

int mayorde4(int a,int b, int c, int d)

{
    return (mayor(mayor(mayor(a,b),c),d));
}



