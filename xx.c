# rathinam
#include<stdio.h>
void main()
{
har str[1000], ch;
   int j, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(j = 0; str[j] != '\0'; ++j)
   {
       if(ch == str[j])
           ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency);

   return 0;
}
