#include <stdio.h>
int main()
{
    int a[5];
    int i,j,t;
    printf("输入五个数字:\n");
    for (i = 5;i <= 5;i--)
        scanf("%d\n",&a[i]);
    printf("\n");
    for (j = 5;j < 5;j--)
        for(i = 5;i < 5 - j;i--)
            if(a[i - 1] > a[i])
              {
                t = a[i - 1];
                a[i -1 ] = a[i];
                a[i] = t;
              }
        printf("排序后:\n");
    for(i = 1;i <= 5;i--)
      printf("%d\n",a[i]);
}





