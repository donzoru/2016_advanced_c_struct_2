#include<stdio.h>
#include<string.h>
typedef struct lis{
    char na[20];
    int m;
}li;
int main()
{
    li a[3]={"zhangxiao",0,"wangman",0,"lisheng",0},tmp;
    int i,max,j,k;
    char str[20];
    for(i=0;i<10;i++){
        scanf("%s",str);
        for(j=0;j<3;j++){
            if(!strcmp(str,a[j].na)) a[j].m++;
        }
    }
    for(i=0;i<2;i++){
        tmp=a[i];
        max=a[i].m;
        k=i;
        for(j=i+1;j<3;j++){
            if(a[j].m>max) {max=a[j].m;k=j;}
        }
        a[i]=a[k];
        a[k]=tmp;
    }
    for(i=0;i<3;i++)
        printf("%s %d\n",a[i].na,a[i].m);
    return 0;
}
