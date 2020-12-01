#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include "pilascolas.h"


using namespace std;

string generaBAstidor();
Auto calcularSecuenciaAleatoria();
int mayor(int,int);
int mayor4(int,int,int,int);

int main()
{
    Cola cola1, cola2, cola3, cola4;
    Pila pila, pila1, pila2, pila_aux1, pila_aux2, pila_aux3;
    Auto coche1={"3547T12","Ateca","Blanco"};
    Auto coche2={"4213T12","Ibiza","Negro"};
    Auto coche3={calcularSecuenciaAleatoria()};
    Auto cochenulo={" "," "," "," "};
    Auto cocheaux, cocheaux1, cocheaux2, cocheaux3, cocheaux4;

    //strand(time(NULL));

    int i = 0, orig = 0, dest = 0, pasos = 0, pasoact = 1;
    int longcola1, longcola2, longcola3, longcola4, longcolamax;
    int longpila1, longpila2, longpila3, longpilamax;
    int pasosmax, tipo;
    //Auto coche3= pila.apilar(calcularSecuenciaAleatoria);


    pasosmax = (N1/N2)+1;
    cout <<  "Parametros de configuracion: N1: " << N1 << " N2: " << N2 << " N3: " << N3 << endl;
    cout <<  "Numero de pasos: " << pasosmax << endl;

    for(int i = pasoact; pasoact <= pasosmax; pasoact++){
    cout << "Pasos de ejecucion: " << pasoact << "/" << pasosmax << endl;
    cout << "\n" << endl;
    cout << "          Linea de produccion 1:|" << "          Linea de produccion 2:|" << "         Linea de produccion 3:|" << "           Linea de produccion 4:|" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Bastidor|" << " Modelo|" << "  Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<< endl;
//    cout << "Bastidor|" << << " Modelo|" << "  Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<< endl;
    cout << coche3.n_bastidor << coche3.color << coche3.modelo << coche3.estado << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "           Camion Bilbao:"   << "                   Camion Murcia:" << "                     Camion Salamanca:" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Bastidor|" << " Modelo|" << "  Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<<"Bastidor|" << " Modelo|" << "    Color|" << "Estado|"<< endl;
    cout << "---------------------------------------------------------------------------------------------------------------------\n" << endl;
    cout << "Se cambian los estados a los coches que ya estan en la linea de produccion\n" << endl;
    system("pause");

}
}
        /*cola.encolar(coche1);
        cout << "Encolando: " << coche1.n_bastidor << endl;
        cola.encolar(coche2);
        cout << "Encolando: " << coche2.n_bastidor << endl;

        coche = cola.desencolar();
        cout << "Desencolar: " << coche.n_bastidor << endl;

        cout << "Apilando: " << coche.n_bastidor << endl;
        pila.apilar(coche);
        cout << "Apilando: " << coche2.n_bastidor << endl;
        pila.apilar(coche2);

        coche = pila.desapilar();
        cout << "Desapilando: " << coche.n_bastidor << endl;
        cout << "Desapilando: " << coche.n_bastidor << " " << coche.modelo << " " << coche.color << " " << coche.estado << endl;

return 0;
*/


