//WRITE A PROGRAM TO COUNT NEWLINES, TABS AND BLANKSPACES.
//-------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{
 int blankspaces=0,tabs=0,newlines=0,i;
 char str[200];
 printf("Enter the line of text:\n");
 scanf("%[^\n]s",str);
 for(i=0;i<=strlen(str);i++)
 {
  if(str[i]==' ')
   blankspaces++;
  else if (str[i]=='\t')
   tabs++;
  else if (str[i]=='\n')
   newlines++;
 }
 printf("blankspaces=%d\ntabs=%d\nnewlines=%d\n",blankspaces,tabs,newlines);
}     
