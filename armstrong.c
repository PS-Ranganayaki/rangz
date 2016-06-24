#include<stdio.h>
int main(){
    int num,r,sum,temp;
    int min,max;
    printf("Enter the minimum range: ");
    scanf("%d",&min);
    printf("Enter the maximum range: ");
    scanf("%d",&max);
    printf("Armstrong numbers in given range are: ");
    for(num=min;num<=max;num++){
         temp=num;
         sum = 0;
         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
    return 0;
}
