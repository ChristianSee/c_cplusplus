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
#include <limits.h>'


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
    int x= INT_MAX/3; //1.Bsp.-Zahl
    int y= 123456789; //2.Bsp.-Zahl

    printf("1. Zahl Vorwaerts und Rueckwaerts: %d %d \n", x, turn(x));
    printf("2. Zahl Vorwaerts und Rueckwaerts: %d %d \n", y, turn(y));

    return 0;
    }
