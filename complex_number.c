#include<stdio.h>

struct complexno
{
    int real;
    int img;
};
int complex_add(int x,int y)
{
    return (x+y);
}
void complex_display(int x,int y)
{
  printf ("The complex number is= %d+i%d",x,y);
}
void main()
{
    struct complexno x,y,c;
    printf("Enter the real number of 1st complex number:- ");
    scanf("%d%d",&x.real,&x.img);
    complex_display(x.real,x.img);
    printf("\nEnter the real number of 2nd complex number:- ");
    scanf("%d%d",&y.real,&y.img);
    complex_display(y.real,y.img);
    c.real=complex_add(x.real,y.real);
    c.img=complex_add(x.img,y.img);
    printf("\nThe addition of ");
    complex_display(c.real,c.img);
}