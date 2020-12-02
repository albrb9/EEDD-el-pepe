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
    Pila pila1, pila2, pila3,pila4, pila_aux1, pila_aux2, pila_aux3, pila_aux4;
    Auto cochenulo={" "," "," "," "};
    Auto cocheaux, cocheaux1, cocheaux2, cocheaux3, cocheaux4;

    //strand(time(NULL));
    int i = 0, orig = 0, dest = 0, pasos = 0, pasoact = 1, cochesgenerado = 1;
    int longcola1, longcola2, longcola3, longcola4, longcolamax;
    int longpila1, longpila2, longpila3, longpilamax;
    int  pasosmax, tipo;

    pasosmax = (N1/N2) + 1;
    cout <<  "Parametros de configuracion: N1: "<< N1  << " N2: " << N2 << " N3: " << N3  << endl;
    cout <<  "Numero de pasos: " << pasosmax << endl;

    for(int i = pasoact; pasoact <= pasosmax; pasoact++){
    cout << "Pasos de ejecucion: " << pasoact << "/" << pasosmax << endl;
    cout << "\n" << endl;
    cout << "        Linea de produccion 1: |" << "          Linea de produccion 2:| " << "         Linea de produccion 3:|" << "          Linea de produccion 4:|" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Bastidor| Modelo| Color| Estado|Bastidor| Modelo|   Color|Estado| Bastidor| Modelo|  Color|Estado| Bastidor| Modelo|  Color|Estado|"<< endl;

    for(int i = 0; i <= 10; i++){
        Auto coche3={calcularSecuenciaAleatoria()};
            if  (coche3.modelo == "Ibiza"){
                pila1.apilar(coche3);
            }
            else if (coche3.modelo == "Arona"){

                pila2.apilar(coche3);
            }
            else if (coche3.modelo == "Ateca"){
                pila3.apilar(coche3);
            }
            else if (coche3.modelo == "Toledo"){

                pila4.apilar(coche3);
           }
    }
        while (pila1.longPila() != 0 or pila2.longPila() != 0 or pila3.longPila() != 0 or pila4.longPila() != 0){
        cocheaux1 = pila1.desapilar();
        cout << setw(1) << cocheaux1.n_bastidor << setw(8)<< cocheaux1.modelo << setw(8) << cocheaux1.color << setw(8)<< cocheaux1.estado << "|" << setw(8);
        pila_aux1.apilar(cocheaux1);
        cocheaux2 = pila2.desapilar();
        cout << cocheaux2.n_bastidor << setw(8)<< cocheaux2.modelo << setw(8) << cocheaux2.color << setw(8)<< cocheaux2.estado << "|" << setw(8);
        pila_aux2.apilar(cocheaux2);
        cocheaux3 = pila3.desapilar();
        cout << cocheaux3.n_bastidor << setw(8)<< cocheaux3.modelo << setw(8) << cocheaux3.color << setw(8)<< cocheaux3.estado << "|" << setw(8);
        pila_aux3.apilar(cocheaux3);
        cocheaux4 = pila4.desapilar();
        cout << cocheaux4.n_bastidor << setw(8)<< cocheaux4.modelo << setw(8) << cocheaux4.color << setw(8)<< cocheaux4.estado << "|" << setw(8);
        pila_aux4.apilar(cocheaux4);
        cout << endl;
        }
        while (pila_aux1.longPila() != 0 or pila_aux2.longPila() != 0 or pila_aux3.longPila() != 0 or pila_aux4.longPila() != 0){
            cocheaux1 = pila_aux1.desapilar();
            pila1.apilar(cocheaux1);
            cocheaux2 = pila_aux2.desapilar();
            pila2.apilar(cocheaux2);
            cocheaux3 = pila_aux3.desapilar();
            pila3.apilar(cocheaux3);
            cocheaux4 = pila_aux4.desapilar();
            pila4.apilar(cocheaux4);


    }
    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "               Camion Bilbao:"   << "                      Camion Murcia:" << "                        Camion Salamanca:" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Bastidor| Modelo|  Color| Estado |Bastidor| Modelo|   Color|Estado| Bastidor| Modelo|  Color|Estado| Bastidor| Modelo|   Color|Estado|"<< endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------\n" << endl;
    cout << endl;
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


