#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string1[Max];

int i;

int k;

int count=0;



printf("Enter Your First String: ");
gets(string1);


for(i=0; string1[i] !='\0'; i++)
{
    k=string1[i];
   if((k==65) || (k==69) || (k==73) || (k==79) || (k==85))
   count++;
   }
   printf("The Vowel is %d", count);



}
 //printf("%d",sum);


