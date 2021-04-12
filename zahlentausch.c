//*****************************************************
//**                                                 **
//** By: Christian Seepold,                          **
//** Thema: Zahlen umdrehen                          **
//** Version 1.0                                     **
//** Datum: 08.07.2018                               **
//** Status: ready                                   **
//**                                                 **
//*****************************************************



#include <stdio.h>

//Zahl umdrehen
int turn (int n){

    int j;
    for(j=0;n>0;n/=10){
        j= j*10 + n%10;
    }
        return j;

    }


//Hauptprogramm
int main (void){
    int x,y;
    printf("Bitte Zahl eingeben \n");
    scanf("%d",&x);

    printf("Zahl Vorwaerts und Rueckwaerts: %d %d \n", x, turn(x));

    return 0;
    }
