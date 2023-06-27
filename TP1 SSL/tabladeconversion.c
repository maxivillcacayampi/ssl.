#include <stdio.h>
#include "Conversion.h"

int main() {
    printf("Fahrenheit a Celsius:\n");
 double fahrenheit, celsius;
 double inf, sup, incremento;
 inf = 0; /* límite inferior de la tabla de temperaturas */
 sup = 300; /* límite superior */
 incremento = 20; /* tamaño del incremento */
 fahrenheit = inf;
 while (fahrenheit<= sup){
      double celsius = Celsius(fahrenheit);
      printf("%3.0f %6.1f\n", fahrenheit, celsius);
      fahrenheit = fahrenheit + incremento;
 }
   
    printf("\nCelsius a Fahrenheit:\n");
  double menor, mayor, incremento1;  
 menor = -17.7; /* límite inferior de la tabla de temperaturas */
 mayor = 148.8; /* límite superior */
 incremento1 = 11.1; /* tamaño del incremento */
 celsius = menor;
 while (celsius <= mayor) {
        double fahrenheit = Fahrenheit(celsius);
        printf("%3.0f %6.1f\n", celsius,fahrenheit);
        celsius = celsius + incremento1;
        }




  return 0;
}