 #include <stdio.h>

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