#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string1[Max];

int i;

int k;

int scount=0;
int ncount=0;
int cacount=0;
int sacount=0;



printf("Enter Your First String: ");
gets(string1);


for(i=0; string1[i] !='\0'; i++)
{
    k=string1[i];
   if((k>=0 && k<=47) || (k>=58 && k<=64) || (k>=91 && k<=96) || (k>=123 && k<=126)){
    scount++;
   }
   else if ((k>=48 && k<=57) ){
    ncount++;
   }
   else if ((k>=65 && k<=90) ){
    cacount++;
   }
   else
    sacount++;

}
printf("Number of Special Characters are= %d\n",scount);
printf("Number of Numbers are= %d\n",ncount);
printf("Number of Capital Alphabets are= %d\n",cacount);
printf("Number of LowerCase Alphabets are= %d\n",sacount);

}



