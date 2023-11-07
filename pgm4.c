#include<stdio.h>
void main()
{
 float far,celcius;
 printf("far	celcius\n");
 for(far=300;far>0;far--)
 { 
   celcius = (far-32)*5/9;
   printf("%.2f	%.2f\n",far,celcius);
 }
}   	
