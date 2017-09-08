# rathinam
#include<stdio.h>
void main()
{ 
int i, j; 
    printf("Enter any two numbers: ");
    scanf("%d%d", &i, &j);

    printf("Original value of i = %d\n",i);
    printf("Original value ofj= %d\n", j);
i ^= j;
j^= i;
i^=j;

    printf("iafter swapping = %d\n", i);
    printf("j after swapping = %d\n", j);

    return 0;
}
