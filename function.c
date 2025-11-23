#include<stdio.h>

// int main() = A initialized function of program
// { } = function operating
// () = function

// How to create a function in C


// How to create a function with parameter | argument
int plusNumber(int a,int b) {
    int sum = a + b;
    return sum;
}

int main(void) {
    int a, b;
    int result;
    
    printf("Please select number between 1-9, with 2 parameter");
    scanf("%d", &a);
    
    printf("Please select number between 1-9, with 2 parameter");
    scanf("%d", &b);
    
    result = plusNumber(a, b);
    printf("Result : %d", result);
    
    return 0;
}
