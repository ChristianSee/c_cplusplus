//*****************************************************
//**                                                 **
//** By:  Christian Seepold,                         **
//** Thema: Potenzberechnung mit Laufzeiten          **
//** Version 1.0                                     **
//** Datum: 05.11.2018                               **
//** Status: ready                                   **
//**                                                 **
//*****************************************************

#include <stdio.h>
#include <time.h>

// Darstellung der Zeit
void showtime( void )
{
  int i;
  for(i=0 ; i<10000000 ; i++);
}

// Normale Berechnung: x^n = x*x^n-1
double potenz_normal( double x , int n )
{
  double y=1;
  int i;

  for(i=0 ; i<n ; i++) {
    showtime();
    y = y*x;
    }

  return y;
}

// Berechnung über Divide&Conquer Algorithmus
double potenz( double x , int n )
{
  showtime();
  double erg;

  if(n > 1){
    if(n%2 == 0){
        erg = potenz(x,n/2); //da n vom Typ int, wird n/2 bei n ungerade gerundet
        return erg*erg;
    }
    else {
        erg = potenz(x,n/2); //da n vom Typ int, wird n/2 bei n ungerade gerundet
        return erg*erg*x;
    }
  }
  else if(n==1){ //Fall x^1 = x
        return x;
  }

  else if (n==0){ //Fall x^0 = 1
        return 1;
  }

}

int main(void)
{
  //Deklarationen
  int n;
  float x;
  double y;

  //clock_t als arithmetischer Datentyp für die CPU-Zeit aus time.h, um die verbrauchte CPU-Zeit seit dem Programmstart zurückzuliefern
  clock_t start1, ende1;
  clock_t start2, ende2;


  //x und n einlesen
  printf("Geben Sie x ein: ");
  scanf("%e",&x);

  printf("Geben Sie n ein: ");
  scanf("%d",&n);
  printf("\n");

  // Zeitberechnung und Ausführung des Devide&Conquer-Algorithmus
  start1 = clock();
  y = potenz(x,n);

  printf("Mit Divide&Conquer: %f^%d = %f \n", x, n, y);
  ende1 = clock();
  printf("In einer Zeit von: %.2f Sekunden \n\n",((float)(ende1-start1)) / CLOCKS_PER_SEC); //um die CPU-Zeit in Sekunden zu erhalten,muss der Rückgabewert durch CLOCKS_PER_SEC dividiert werden


  // Zeitberechnung und Ausführung des normalen Algorithmus
  start2 = clock();
  y = potenz_normal(x,n);

  printf("Mit normaler Berechnung: %f^%d = %f \n", x, n, y);
  ende2 = clock();
  printf("In einer Zeit von: %.2f Sekunden \n\n",((float)(ende2-start2)) / CLOCKS_PER_SEC);


  return 0;
}
