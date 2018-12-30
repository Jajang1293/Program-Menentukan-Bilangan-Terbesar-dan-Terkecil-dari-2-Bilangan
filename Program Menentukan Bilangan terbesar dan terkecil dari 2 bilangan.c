#include<stdio.h>

int main()
{
    int a, b, max, min;
    printf("Masukan Bilangan A : ");scanf("%d",&a);
    printf("Masukan Bilangan B : ");scanf("%d",&b);
    if (a>b){max=a;min=b;}
    else{max=b;min=a;}
    printf("\nBilangan terbesar adalah : %d",max);
    printf("\nBilangan terkecil adalah : %d",min);
}
