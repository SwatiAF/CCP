//SWAPPING OF NUMBERS USING FUNCTIONS

#include <stdio.h>

void swap(int,int);
int main ()
{
    int a,b;
    printf("Enter the values for a and b \n");
    scanf("%d %d", &a,&b);
    printf("Before swapping: a=%d and b=%d \n",a,b);
    swap(a,b);

    return 0;
}
void swap(int x, int y)
{
     int temp;
     temp=x;
     x=y;
     y=temp;
     printf("After swapping: a=%d and b=%d \n",x,y);
}
