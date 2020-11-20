#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>


using namespace std;

string generaBastidor();
Auto calcularSecuenciaAleatoria();
int mayor(int,int);
int mayorde4(int,int,int,int);


int main()
{
    Cola cola1, cola2, cola3, cola4;
    Pila pila, pila1, pila2, pila3, pila_aux1, pila_aux2, pila_aux3;
    Auto coche1 = ("3547T11","Ateca","Gris");
    Auto coche2 = ("5462A92","Ibiza","");
    Auto cochenulo = ("","","","");
    Auto cocheaux, cocheaux1, cocheaux2, cocheaux3, cocheaux4;

    srand (time(NULL));

    int i = 0; orig = 0, dest = 0, pasos = 0;
    int longcola1, longcola2, longcola3, longcola4, longcolamax;
    int longpila1, longpila2, longpila3, longpilamax;
    int pasosmax, tipo;

}
