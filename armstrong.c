#include<stdio.h>
#include<math.h>
int main(){
    int a,num,remainder,b,n=0;
    printf("enter the number;");
    scanf("%d",&a);
    num=a;
    while(num!=0){
        num/=10;
        ++n;
    }
    num=a;
    while(num!=0){
        remainder=num%10;
        b+=pow(remainder,n);
        num/=10;

    }
    if(b==a){
        printf("%d is armstrong number",a);
    }
    else{
        printf("%d is not an armstrong number",a);
    }
    return 0;
}