#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string1[Max];
char string2[Max];
int i;
int j;
int k;
int l;
int sum1=0;
int sum2=0;


printf("Enter Your First String: ");
gets(string1);
printf("Enter Your Second String: ");
gets(string2);

for(i=0; string1[i] !='\0'; i++)
{
    k=string1[i];
    sum1=sum1+k;

}
 printf("The Total value of String 1 is = %d \n",sum1);
for(j=0; string2[j] !='\0'; j++)
{
    l=string2[j];
    sum2=sum2+l;

}
  printf("The Total value of String 2 is = %d \n",sum2);

 if(sum1==sum2){
    printf("The Strings are equal in ASCII value");
 }
 else
    printf("They are Not equal");



}
 //printf("%d",sum);


