#include<stdio.h>
char a;
int i,j,n,m;
int main ()
{
	scanf("%d %d",&n,&m);
	for(i=0; i<n; i++)
	{
		for(j=0; j<=m; j++)
		{
			scanf("%c",&a);
			if (a == '.')
				((i+j)%2)?printf("B"):printf("W");
			else printf("%c",a);
		}
	}
	return 0;
}