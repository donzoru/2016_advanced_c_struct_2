#include<stdio.h>
int main(){
    int i;
    double gr,xs,yg,sum=0,k=0,j;
    double sl[3];
    for(i=0;i<3;i++){
        scanf("%lf%lf%lf",&gr,&xs,&yg);
        sum+=xs-gr;
        k+=xs*0.4;
        sl[i]=xs*0.4/yg;
    }
    if(sum>50) j=sum*0.25;
    else if(sum<=50 && sum>20) j=sum*0.15;
    printf("%.2f %.2f %.2f %.2f",j,sl[0],sl[1],sl[2]);
    j=sum-k-j;
    if(j>0) printf(" no\n");
    else printf(" yes\n");
    return 0;
}
