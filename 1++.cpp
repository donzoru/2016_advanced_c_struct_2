#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
typedef struct lis{
    char na[20];
    int m;
}li;
int main()
{
    li a[3]={"zhangxiao",0,"wangman",0,"lisheng",0},tmp;
    int i,m,j,k;
    char str[20];
    for(i=0;i<10;i++){
        cin>>str;
        for(j=0;j<3;j++){
            if(!strcmp(str,a[j].na)) a[j].m++;
        }
    }
    for(i=0;i<2;i++){
        tmp=a[i];
        m=a[i].m;
        k=i;
        for(j=i+1;j<3;j++){
            if(a[j].m>m) {m=a[j].m;k=j;}
        }
        a[i]=a[k];
        a[k]=tmp;
    }
    for(i=0;i<3;i++)
        cout<<a[i].na<<' '<<a[i].m<<endl;
    return 0;
}
