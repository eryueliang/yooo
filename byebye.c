#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
我是一个猜数字游戏但是我有问题啊
*/
void main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int b,c,d,e,f,n,m,i,j,h,g;
    int ans[4],num[4];
    srand(time(NULL));
    n = rand()%9 + 1;
    b = a[n];
    for(c = 0;c <= 8;c++)
    a[n]=a[n+1]
    srand(time(NULL));
    n = rand()%8;
    for(d = 0;d <= 7;d++)
    a[n]=a[n+1];
    srand(time(NULL));
    n = rand()%7;
    for(e = 0;e <= 6;e++)
    e =  a[n];
    f=b*1000+c*100+d*10+e;
        printf("输入一个四位数来挑战一下智商呵呵:\n");
    while(1){
        scanf("%d",&m);
        ans[0]= m / 1000;
        ans[1]= m / 100 % 10; 
        ans[2]= m / 10 % 10;
        ans[3]= m % 10;
        for(i = 0;i <= 3;i++)
        for(j = 0;j <= 3;j++)
        if(num[i] == ans[i]){
            h++;}
            if(num[i] == ans[j]){
                g++;
                        }
        }
    printf("%dA%dB\n",h,g);
    if(h == 4){
        printf("wooooooooo!\n");
    } else {
        h = 0;
        g = 0;
    }
}
