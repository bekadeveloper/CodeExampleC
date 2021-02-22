//
//  main.c
//  CodeExampleC
//
//  Created by Begzod Bakhriddinov on 21/02/21.
//

#include <stdio.h>
#include <stdbool.h>

int main() {
    
//    // INTEGERS
//    int x = 4, y = 12, z;
//    x *= 3;
//    x++;
//
//    z = x + y;
//
//    // FLOATING NUMBERS
//    float a, b, c;
//    a = 9.1f;
//    b = 7.3f;
//    c = 1.4f;
//
//    double d = 432.27509f;
//
//    // CHARACTERS
//    char dollarSign = '$';
//
//    // BOOLEANS
//    bool isCoder = false;
//
//    printf("Variable: %d + %d = %d\n", x, y, z);
    
    // float x, y, res;
    
    // scanf("%f", &x);
    // scanf("%f", &y);
    
    // res = x * y;
    
    // printf("Result: %.2f\n", res);
    
    // ARRAYS
    int array1[] = {1, 8, 3, 9123, 34};
    printf("%d\n", array1[3]); // prints "9123"
    
    float array2[] = {3.2f, 902.5f, 1.9f, 54.901f};
    printf("%.2f\n", array2[2]); // prints "1.90"
    
    char array3[] = {'w', 'o', 'r', 'd'};
    printf("%c\n", array3[0]); // prints "w"
    
    char array4[] = "Hello Swift!";
    printf("%c\n", array4[6]); // prints "S"
    printf("%s\n", array4);
    
    return 0 ;
}
