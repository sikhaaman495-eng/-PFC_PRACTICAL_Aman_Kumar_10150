#include <stdio.h>

int main() {
    for(int i=1;i<=4;i++){
        for(int j=0;j<i;j++){
            printf("%c ", 'A'+j);
        }
        printf("\n");
    }
    return 0;
}
/*
A 
A B
A B C
A B C D
*/