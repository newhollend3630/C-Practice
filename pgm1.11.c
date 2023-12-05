//Write a program that prints its input one word per line


/* #include<stdio.h>
#include<string.h>
void main()
{ int i; char str[500];
 printf("Enter the sentence\n");
 scanf("%[^\n]s",str);
 for(i=0;i<=strlen(str);i++)
 { printf("%c",str[i]);
  if(str[i]== ' ')
  {
   printf("\n");
  }
 }
} 
*/
 

 //OR

#include<stdio.h>
#include<string.h>
void main()
{ char str[500];
 printf("Enter the sentence\n");
 scanf("%[^\n]s",str);
 char *words = strtok(str, " ");
 while(words != NULL)
 { printf("%s\n",words);
   words = strtok(NULL," ");
 }
}
 
