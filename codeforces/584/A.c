#include <stdio.h>
int main()
{
    int n, t, i;
    scanf("%d %d", &n, &t);
     if(t == 10)
     {
         if(n == 1)
          printf("-1\n");
        else
          {
              for(i= 1; i <= n-1; i++)
               printf("1");
               printf("0\n");

          }
     }
        else
        {
            for(i = 1; i <= n; i++)
             printf("%d", t);
             printf("\n");
        }
        return 0;
}
