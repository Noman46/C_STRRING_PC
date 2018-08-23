
#include<stdio.h>
#define  Max 200 // Define the Maximum range I can take character

void main(){

char string1[Max];

int i;

int k;

int count=0;



printf("Enter Your Sentence: ");
gets(string1);


for(i=0; string1[i] !='\0'; i++)
{
    k=string1[i];
   if((k==32))
   count++;
   }
   printf("The Number of words are= %d", count+1);



}
 //printf("%d",sum);


