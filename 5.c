#include<stdio.h>
typedef struct lis{
    int id;
    char sign[20];
    int h1,h2,m1,m2,mon;
}li;
int main()
{
    li a[5];
    int i;
    for(i=0;i<5;i++){
        scanf("%d%s%d%d%d%d",&a[i].id,a[i].sign,&a[i].h1,&a[i].m1,&a[i].h2,&a[i].m2);
        a[i].mon=a[i].h2-a[i].h1;
        if(a[i].mon<0) a[i].mon=24+a[i].mon;
        if(a[i].m2>a[i].m1) a[i].mon++;
    }
    for(i=0;i<5;i++)
        printf("%d %s %d\n",a[i].id,a[i].sign,a[i].mon*10);
    return 0;
}
