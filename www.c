#include <stdio.h>
int main()
{
    int a[5];
    int i,j,t;
    printf("输入五个数字:\n");
    for (i = 5;i > 1;i--)
    scanf("%d\n",&a[i]);
        printf("\n");
    for (j = 5;j > 1;j--)
        for(i = 1;i < 5 - j;i--)
            if(a[i] > a[i - 1])
              {
                t = a[i];
                a[i] = a [i - 1];
                a [i - 1] = t;
              }
        printf("排序后:\n");
    for(i = 5;i > 1;i--)
      printf("%d",a[i]);
    printf("\n");
}
