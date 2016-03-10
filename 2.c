#include<stdio.h>
#include<string.h>
#define maxn 100
typedef struct lis{
    char nam[200];
    char sex[maxn];
    char stu[maxn];
}nali;
int main()
{
    int n,i,j,k;
    nali a[maxn],tmp;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s%s%s",a[i].nam,a[i].sex,a[i].stu);
    }
    for(i=0;i<n-1;i++){
        tmp=a[i];
        k=i;
        c=a[i].nam[0];
        for(j=i+1;j<n;j++){
            if(a[j].nam[0]<c) {c=a[j].nam[0];k=j;}
        }
        a[i]=a[k];
        a[k]=tmp;
    }
    for(i=0;i<n;i++)
        printf("%s %s %s\n",a[i].nam,a[i].sex,a[i].stu);
    return 0;
}
