#include<stdio.h>
int main() {
    int num1, num2 ,num3;
    printf("Enter numbers:");
    scanf("%d %d %d",&num1, &num2, &num3 );
    printf("1st Number = %d,  2nd Number = %d, 3rd Numeber = %d\n", num1, num2, num3);

    if(num1>num2 && num1 > num3){
        printf("The 1st number is greatest among Three\n");
    }
    else if(num2>num1 && num2>num3 ){
        printf("The 2nd number is greatest among Three\n");
    }

    else{
        printf("The 3rd number is greatest among Three\n");
    }
return 0;
}

