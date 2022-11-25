#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20;
    printf("Before Swaping A=%d\n",a);
    printf("Before Swaping B=%d\n\n",b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("After Swaping A=%d\n",a);
    printf("After Swaping B=%d\n",b);
    getch();
}
