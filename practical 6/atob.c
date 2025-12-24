#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    for(int i=a; i<=b; i++){
        printf("%d\n",i);
    }
    return 0;

}


/*
input:1 10

output:
1
2
3
4
5
6
7
8
9
10
*/