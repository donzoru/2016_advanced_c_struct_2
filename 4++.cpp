#include<iostream>
using namespace std;
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
    cin>>n;
    for(i=0;i<n;i++){
        cin>>kk[i].nam;
        for(j=0;j<3;j++)
            cin.get(kk[i].a[j].num,50);
    }
    for(i=0;i<n;i++){
        cout<<kk[i].nam;
        for(j=0;j<3;j++){
            for(k=0;(m=kk[i].a[j].num[k])!='\0';k++){
                if(kk[i].a[j].num[k]!='3' && kk[i].a[j].num[k]!='7') cout<<kk[i].a[j].num[k];
            }
            cout<<'\n'<<endl;
        }
    }
    return 0;
}
