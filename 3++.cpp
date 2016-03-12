#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main(){
    int i;
    double gr,xs,yg,sum=0,k=0,j=0;
    double sl[3];
    for(i=0;i<3;i++){
        cin>>gr>>xs>>yg;
        sum+=xs-gr;
        k+=xs*0.4;
        sl[i]=xs*0.4/yg;
    }
    if(sum>50) j=sum*0.25;
    else if(sum<=50 && sum>20) j=sum*0.15;
    printf("%.2f %.2f %.2f %.2f",j,sl[0],sl[1],sl[2]);
    if(sum-k-j>0) cout<<' '<<"no"<<endl;
    else cout<<' '<<"yes"<<endl;
    return 0;
}
