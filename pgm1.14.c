//Write a program to print a histogram of the frequencies of different charecters in its input.
//-------------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{ int i,count[200]={0};
  char str[1000];
 printf("Enter the string\n");
 scanf("%[^\n]s",str);
 for(i=0;i<=strlen(str);i++)
 { 
  if(str[i] >= 'a' && str[i] <= 'z')
  {
   count[str[i]-'a']++;
  }
  if(str[i] >= 'A' && str[i] <= 'Z')
  {
   count[str[i]-'A']++;
  }
 }
 printf("chars  :  no._of_chars\n");
 for(i=0;i<25;i++)
 {if(count[i]!=0)
  printf("%c  :  %d\n",(char)('a'+i),count[i]);
 }
}     
