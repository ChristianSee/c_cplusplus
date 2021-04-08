//*****************************************************
//**                                                 **
//** By: Christian Seepold,                          **
//** Thema: Fakultaeten bis 19                       **
//** Version 1.0                                     **
//** Datum: 26.06.2018                               **
//** Status: ready                                   **
//**                                                 **
//*****************************************************



#include <stdio.h>

//Berechnung der Fakultaet
double fakultaet (int n){
    int i;
    double fact=1.0;

    for (i=1;i<=n;i++){
        fact=fact*i;
        }
    return fact;
    }


//Hauptprogramm
int main (void){
    int n;

    for (n=0;n<=19;n++){
        printf("%d!=%20.1f \n",n,fakultaet(n));
        }
    return 0;
    }
