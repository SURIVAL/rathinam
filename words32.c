# rathinam
#include<stdio.h>
void main()
{ 
char line[81], ctr;
int k,a;
end = 0,
characters = 0,
words = 0,
lines = 0;
printf(“KEY IN THE TEXT.\n”);
printf(“GIVE ONE SPACE AFTER EACH WORD.\n”);
printf(“WHEN COMPLETED, PRESS ‘RETURN’.\n\n”);
while( end == 0)
{
a= 0;
while((ctr=getchar()) != ‘\n’)
line[c++] = ctr;
line[a] = ”;
if(line[0] == ”)
break ;
else
{
words++;
for(k=0; line[k] != ”;k++)
if(line[k] == ‘ ‘ || line[k] == ‘\t’)
words++;
}
lines = lines +1;
characters = characters + strlen(line);
}
printf (“\n”);
printf(“Number of lines = %d\n”, lines);
printf(“Number of words = %d\n”, words);
printf(“Number of characters = %d\n”, characters);
}
