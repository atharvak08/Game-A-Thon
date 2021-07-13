# Game-A-Thon : Introduction to git and github
## NAME: Atharv Kevalram
### Problem Statement 1 :Given Two Integers Write a code to add them.
Test case: Input : 21 , 4  Output: 25
'''c
#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("The sum is %d + %d = %d", number1, number2, sum);
    return 0;
}

'''

### Problem Statement 2 :write a code to check whether given number is palindrome or not.
Test case 1: Input :121 Output: Palindrome number
Test case 2: Input: 123 Output: not palindrome

'''c
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
'''

### Problem Statement 3 :write a code to multiply two integers.
Test case : Input: 2,3 Output:6
'''c
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

'''
