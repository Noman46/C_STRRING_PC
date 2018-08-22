#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string1[Max];

int i;

int k;



printf("Enter Your First String: ");
gets(string1);


for(i=0; string1[i] !='\0'; i++)
{
    k=string1[i];
    if((k<=122) && (k>=97)){
       printf("%c",k-32);
    }
    else
         printf("%c",k);



}





}
 //printf("%d",sum);


