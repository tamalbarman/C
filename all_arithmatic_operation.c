#include <stdio.h>
int main()
{
	int a,b,c,d,e,g;
	float f;
	
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b; 
	
	printf("after adding:%d \n",c);
	printf("after substraction:%d \n",d);
	printf("after multiplication:%d \n",e);
	printf("after devide:%f \n",f);
	printf("after modulas:%d \n",g);
	
	return (0);
}
