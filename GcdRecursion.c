#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    int result= gcd(num1, num2);

    printf("GCD: %d\n", result);

    return 0;
}

int gcd(int num1, int num2){
    if(num2==0){
        return num1;
    }
    else{
        return (num2, num1%num2);
    }
}
