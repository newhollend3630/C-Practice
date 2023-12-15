//Write a program to print a histogram of lengths of words in its inputs:
//-----------------------------------------------------------------------
#include<stdio.h>
#include<string.h>
int main()
{ int i,n,m,j,a[1000],count[30];
  char str[1000][1000];
  printf("enter the no. of words\n");
  scanf("%d",&n);
    printf("enter the sentence\n");
    for(i=0;i<n;i++)
    {scanf("%s",str[i]);
    }
    printf("words  :  words_lengths\n\n");
    for(i=0;i<n;i++)
    {printf("%s  :  %ld\n",str[i],strlen(str[i]));
    a[i]= strlen(str[i]);
    }
    int max=0;
  for(i=0;i<n;i++)
  {if(a[i]>max)
  max = a[i];}
    printf("\nwords_length\tno. of words\n");
   for(j=1;j<=max;j++)
   { 
    for(i=0;i<=n;i++)
    { if(a[i] == j)
      count[m]+=1;
      
    } printf("%d ------------>\t%d\n",j,count[m]); m++;
   } 
    return 0;
}
