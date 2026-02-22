#include<stdio.h>
#include<stdbool.h>

int main() {
    //DATA1
    float markMass1 = 78, markHeight1 = 1.69;
    float johnMass1 = 92, johnHeight1 = 1.95;
    
    float markBMI1 = markMass1 / (markHeight1*markHeight1);
    float johnBMI1 = johnMass1 / (johnHeight1*johnHeight1);
    bool markHigherBMI1 = markBMI1 > johnBMI1;
    
    printf("==DATA1==\n");
    printf("Mark has higher BMI than John:%s\n",markHigherBMI1 ? "true" : "false");
    /*
    ?...:... shortcut for if-else
    condition ? expression1 : expression2;
    */

    //DATA2
    float markMass2 = 95, markHeight2 = 1.88;
    float johnMass2 = 85, johnHeight2 = 1.76;
    
    float markBMI2 = markMass2 / (markHeight2*markHeight2);
    float johnBMI2 = johnMass2 / (johnHeight2*johnHeight2);
    bool markHigherBMI2 = markBMI2 > johnBMI2;
    
    printf("==DATA2==\n");
    printf("Mark has higher BMI than John:%s\n",markHigherBMI2 ? "true" : "false");
    
    return 0;
    
}