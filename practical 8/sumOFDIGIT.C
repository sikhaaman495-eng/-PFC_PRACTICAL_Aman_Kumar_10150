#include<stdio.h>
int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d\n",n,sumOfDigits(n));
    return 0;
}
/*
Enter a number: 4731
Sum of digits of 4731 is 15
*/