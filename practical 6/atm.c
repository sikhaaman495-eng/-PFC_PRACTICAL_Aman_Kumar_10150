#include <stdio.h>

int main(){
int pin;
int originalpin=1234;
        if(pin==originalpin)
    printf("Enter ATM PIN:");
    scanf("%d",&pin);
    if(pin==originalpin)
    printf("Access Granted");
    
    else
        printf("wrong pin");
    
    return 0;
}
/*
1234
Access Granted
*/