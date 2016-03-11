#include<iostream>
#include<string.h>
#define maxn 100
using namespace std;
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
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i].nam>>a[i].sex>>a[i].stu;
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
        cout<<a[i].nam<<' '<<a[i].sex<<' '<<a[i].stu<<endl;
    return 0;
}
