#include <stdio.h>

int main() {
    
    int i;
    // Switch case
    /* 
       switch (condition variable) {
           function
       }
    */
    // switch case = check variable to compare with constant a value (integer, character)
    // if...else = check complex condition and check a lot of variable 
    
    for (i = 1; i <= 10; i++) {
        switch (i % 2) {
            // case no.0, print message numberic even
            case 0:
            printf("%d even\n", i);
            break;
            // case no.1, print message numberic odd
            case 1:
            printf("%d odd\n", i);
            break;
        }
    }
    
    return 0;
}