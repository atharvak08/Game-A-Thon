#include <stdio.h>
int main() {    

    int number1, number2, multiply;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    multiply = number1 * number2;      
    
    printf("The multiplication is %d * %d = %d", number1, number2, multiply);
    return 0;
}
