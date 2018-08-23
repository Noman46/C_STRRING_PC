#include <stdio.h>

void main()
{
   char s[1000];
   char r[1000];
   int i,begin, end, count = 0;

   printf("Input a string\n");
   gets(s);

   // Calculating string length

 for(i=0;s[i] !='\0'; i++){
    count++;
 }
 //printf("%d",count);
 end= count-1;


 for (begin = 0; begin < count; begin++) {
      r[begin] = s[end];
      end--;
   }
r[count] = '\0';


   printf("%s\n", r);

   return 0;

}
