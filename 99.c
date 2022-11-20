#include <stdio.h>
int main() {
    printf("RA2211042010043\n");
    int marks,distinction_mark=75;
    printf("Enter the marks : ");
    scanf("%d",&marks);
    
    if (marks>distinction_mark)
        printf("secured distinction");
    else 
        printf("Not secured distinction");
    return 0;
}
