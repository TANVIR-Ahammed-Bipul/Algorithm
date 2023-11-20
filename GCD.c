#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    while(num2!=0){
        int hcf= num1%num2;
        num1= num2;
        num2=hcf;
    }

    printf("GCD: %d\n", num1);
    return 0;
}
