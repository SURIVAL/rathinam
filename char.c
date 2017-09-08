# rathinam
#include<stdio.h>
void main()
{
   char str[100];
   int a = 0, b = 0, c = 1;
   clrscr();
   puts("Enter any string\n");
   gets(str);
   for(a = 0; str[a] !='\0';a++)
   {
      b = b + 1;
   }
   printf("The number of characters in the string are %d\n", b);
   for(a = 0; a <= b-1; a++)
   {
      if(str[a] == ' ')
      {
    c = c + 1;
      }
   }
   printf("The number of words in the string are %d", c);
   getch();
}
