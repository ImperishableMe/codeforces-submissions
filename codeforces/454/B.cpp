#include<cstdio>
#define N 100010
int n,i,a[N],cnt,p;
int main()
{
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    scanf("%d",&a[i]);
    a[n+1]=a[1];
    for (i=1;i<=n;i++)
    if (a[i]>a[i+1]) 
    {
        cnt++;
        p=n-i;
    }
    if (cnt>1)
    printf("-1");
    else
    printf("%d\n",p);
}