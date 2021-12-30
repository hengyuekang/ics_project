#include<stdio.h>
int main()
{
    int a[9];
    a[0]=134;
    for(int i=1;i<=8;i++)
    {
        a[i]=a[i-1]+1-2*i;
        printf("%d ",a[i]);
    }
    return 0;
}