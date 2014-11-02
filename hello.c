#include <stdio.h>


int main()
{

    int a[5];
    int i,j;
    printf("输入五个数字:\n");
    for (i = 0;i < 5;i++){
        scanf("%d",&a[i]);
        printf("%d\n",a[i]);

    }
    printf("\n");
    for(j = 0;j < 5;j++)
        for(i = 0;i < j;i++)
            if(a[i] > a[j]){
                a[i]=a[j]+a[i];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
             }
        printf("排序后:\n");
    for(i = 0;i <5;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;

}
~                                                                                                                                                                                               
~                                 
