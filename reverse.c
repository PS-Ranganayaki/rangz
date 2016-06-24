#include<stdio.h>
int main(){
    int num,r,reverse=0;
clrscr();
    printf("Enter any number: ");
    scanf("%d",&num);

    while(num){
         r=num%10;
         reverse=reverse*10+r;
         num=num/10;
    }
    printf("Reversed of number: %d",reverse);
getch();
    return 0;
}
