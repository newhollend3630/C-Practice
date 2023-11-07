#include<stdio.h>
void main()
{ float celcius,fahrenheit;
  printf("Enter the temperature in degree celcius\n");
  scanf("%f",&celcius);
  fahrenheit = (celcius*9)/5+32;
  printf("celcius	fahrenheit\n");
  printf("%.2f	%.2f\n",celcius,fahrenheit);
} 
