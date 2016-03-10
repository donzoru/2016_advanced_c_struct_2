#include<stdio.h>
typedef struct lis{
    char num[50];
}li;
typedef struct s{
    char nam[20];
    li a[3];
}s;
int main()
{
    int n,i,j,k;
    s kk[100];
    char m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",kk[i].nam);
        for(j=0;j<3;j++)
            scanf("%s",kk[i].a[j]);
    }
    for(i=0;i<n;i++){
        printf("%s\n",kk[i].nam);
        for(j=0;j<3;j++){
            for(k=0;(m=kk[i].a[j].num[k])!='\0';k++){
                if(kk[i].a[j].num[k]!='3' && kk[i].a[j].num[k]!='7') printf("%c",kk[i].a[j].num[k]);
            }
            putchar('\n');
        }
    }
    return 0;
}
