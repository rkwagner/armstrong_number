#include <stdio.h>

void main(){
    int n, sum = 0;
    
    printf("Enter a number to see if it is an Armstrong Number: ");
    scanf("%d", &n);

    int q = n;
    while(q){
        int p = q%10;
        q = q/10;
        sum += p*p*p;
    }

    if(sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.  Sum is %d\n", n, sum);
}
