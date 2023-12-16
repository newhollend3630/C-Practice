//Rewrite the temperature conversion program from section 1.2 to use a functiion for conversion
//----------------------------------------------------------------------------------------------
#include<stdio.h>
float far(float celcius);
float cel(float far);
int main()
{float celcius,a,b;
    printf("enter the temperature in celcius\n");
    scanf("%f",&celcius);
    a =far(celcius);
    printf("temp. in farenhiet %f\n",a);
    b =cel(a);
    printf("temp. in celcius %f\n",b);
    return 0;
}
float far(float cel)
{float far;
 far = (9/5)*cel+32;
 return far;
}

float cel(float faren)
{
 float celc;
 celc = (faren-32)*5/9;
 return celc; 
}
