//*****************************************************
//**                                                 **
//** By: Christian Seepold,                          **
//** Thema: Fakultaet Rekursiv                        **
//** Version 1.0                                     **
//** Datum: 26.06.2018                               **
//** Status: ready                                   **
//**                                                 **
//*****************************************************



#include <stdio.h>

//Berechnung der Fakultaet Rekursiv (Funktion ruft sich selbst auf)
double fakultaet (int n){

    if (n==0)
        return 1; //Abbruch, kein weiterer Funktionsaufruf
    else
        return n*fakultaet(n-1);

    }


//Hauptprogramm
int main (void){
    int n;

    for (n=0;n<=19;n++){
        printf("%d!=%20.1f \n",n,fakultaet(n));
        }
    return 0;
    }
