
#include<stdio.h>
#define  Max 100 // Define the Maximum range I can take character

void main(){

char string[Max];
char string2[Max];
int i;
int count=0;

printf("Enter Your String: ");
gets(string);


for(i=0; string[i] !='\0'; i++)
{

    string2[i] = string[i];
    count++;

}
string2[i] = '\0';
printf("First string = %s\n", string);
printf("Second string = %s\n", string2);
printf("Total characters copied = %d\n", count);

}

\


/*#include<stdio.h>

int main(){

    int i;

    //Print numbers from 1 to 100
    for(i = 1; i <= 5; i++){

      printf("%d ",i);
    }

    printf("%d",i);

    return 0;
}

*/


