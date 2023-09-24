#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	char b[50];
	char c[50];
	int p=0,q=0,r=0;
	int t=0;
	int x,g,s,n,m;
	printf("Enter First String:");
	gets(a);
	printf("Enter Second String:");
	gets(b);
	printf("Enter the position where the item has to be inserted: ");
	scanf("%d",&p);
	q=strlen(a);
	n=strlen(b);
	r=0;
	while(r<=q)
	{
		c[r]=a[r];
		r++;
	}	
	s = n+q;
	m = p+n;
	for(r=p;r<s;r++)
	{
		x=c[r];
		if(t<n)
		{
			a[r]=b[t];
			t=t+1;
		}
		a[m]=x;
		m=m+1;
	}
	printf("%s",a);
}