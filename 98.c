#include <stdio.h>
int main() {
    printf("RA2211042010043\n");
    int balance,Sufficient_balance=1000;
    printf("Enter balance : ");
    scanf("%d",&balance);
    
    if (balance>Sufficient_balance)
        printf("Sufficient balance");
    else 
        printf("Low balance");
    return 0;
}
