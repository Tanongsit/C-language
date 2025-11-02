// Libraries
#include<stdio.h>
#include<stdbool.h>

// Datatype
// int = 1234, -1234
// char(character) = "",'' ("Hello C")
// bool(boolean) = validate value (true,false)
// float = 3.14 (decimal point)

// double = 3.145523 (more than 2 decimal point)
// null = (empty)

// variable name
// 1. Database 2. Variable name 3.Value default
// int x = 10
// char fullName = ("EDCO")

// Conditional
// 1. if (if the conditional is true)
// 2. if...else (if gonna chose the conditional just one)
// 3. if...else if (if want to check conditional more than one)
// 4. if...else if...else ()

// function main() It's means the initial first of all the program in C 
int main() {
    // Conditional statement
    // 1. if
    int x = 10;
    if (x<=20) {
    //   function printf() it's means info of what 
        printf("x is less than 20\n");
    }
    
    // 2. if...else
    // if (condition) {
    // function
    // }
    
if (x==20) {
    printf("x is equal to 20\n");
}else {
    printf("x is less than 20\n");
}

// 3. if... else if

if (x > 20) {
    printf("x is greater than 20\n");
} else if (x == 20) {
    printf("x is equal to 20\n");
}else if (x < 20) {
    printf("x is less than 20\n");
}

// 4. if...else if...else

if (x == 20) {
    printf("x is equal to 20\n");
}else if (x > 20) {
    printf("x is greater than 20\n");
}else {
    printf("x is not equal or more than 20\n");
}

return 0;

}