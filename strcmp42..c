# rathinam
#include<stdio.h>
void main()
{ 
char str1[20], str2[20];
  	int a=0, b=0;

  	printf("\nEnter first string :: ");
  	gets(str1);
  	printf("\nEnter second string :: ");
  	gets(str2);

  	printf("\nStrings are :: \n\n");
    puts(str1);
    puts(str2);

	while((str1[a]!='\0') || (str2[a]!='\0'))
    {
    		if(str1[a]!=str2[a])
      			b++;
    		a++;
   	}

   	if(b==0)
     		puts("\nStrings are equal.\n");
   	else
     		puts("\nStrings are not equal.\n");

   	return 0;
}
