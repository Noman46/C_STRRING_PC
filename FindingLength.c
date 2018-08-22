#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string[Max];
int i;
int count=0;

printf("Enter Your String: ");
gets(string);

//printf("The string is... %s  .....",string);
for(i=0; string[i] !='\0'; i++)
{
    count++;
}
printf("The length of the string you provide is %d", count);
}

