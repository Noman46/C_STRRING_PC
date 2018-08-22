#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string1[Max];
char string2[Max];
int i;
int j;
int count1=0;
int count2=0;

printf("Enter Your First String: ");
gets(string1);
printf("Enter Your Second String: ");
gets(string2);
//printf("The string is... %s  .....",string);
for(i=0; string1[i] !='\0'; i++)
{
    count1++;
}
for(j=0; string2[j] !='\0'; j++)
{
    count2++;
}

if(count1 == count2){

    printf("The Given String Is equal by length");

}
else
    printf("The Given strings are Not equal");
}
