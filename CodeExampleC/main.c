//
//  main.c
//  CodeExampleC
//
//  Created by Begzod Bakhriddinov on 21/02/21.
//

#include <stdbool.h>
#include "functions.h"
#include "structs.h"

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
    
//     float x, y, res;
//
//     scanf("%f", &x);
//     scanf("%f", &y);
//
//     res = x * y;
//
//     printf("Result: %.2f\n", res);
    
//    // ARRAYS
//    int array1[] = {1, 8, 3, 9123, 34};
//    printf("%d\n", array1[3]); // prints "9123"
//
//    float array2[] = {3.2f, 902.5f, 1.9f, 54.901f};
//    printf("%.2f\n", array2[2]); // prints "1.90"
//
//    char array3[] = {'w', 'o', 'r', 'd'};
//    printf("%c\n", array3[0]); // prints "w"
//
//    char array4[] = "Hello Swift!";
//    printf("%c\n", array4[6]); // prints "S"
//    printf("%s\n", array4);
    
//    // CONDITIONALS
//    int x = 19;
//
//    if (x >= 10) {
//        printf("x is greater or equal to 10\n");
//    } else {
//        printf("x is smaller than 10\n");
//    }
//
//    int y = 47;
//
//    switch (y) {
//        case 12:
//            printf("y is equal to 12\n");
//            break;
//
//        default:
//            printf("y is not equal to 12\n");
//            break;
//    }
    
//    // LOOPS
//    for (int i = 10; i >= 0; i--) {
//
//        if (i == 0) {
//            printf("Boom!\n");
//            break;
//        }
//
//        printf("%d\n", i);
//    }
//
//    bool isCoder = true;
//    int number;
//
//    while (isCoder) {
//        printf("Are u coder? ");
//        scanf("%d", &number);
//
//        if (number == 1) {
//            isCoder = false;
//        }
//    }
//
//    bool isFavorite = true;
//    int num;
//    int favoriteNum = 17;
//
//    do {
//        printf("number? ");
//        scanf("%d", &num);
//
//        if (num == favoriteNum) {
//            printf("have a nice day!\n");
//            break;
//        }
//    } while (isFavorite);
//
//    int array[] = {4, -2, 987, -123, 0, 239, 24};
//
//    for (int i = 0; i < 7; i++) {
//        printf("%d ", array[i]);
//    }
//    printf("\n");
//
//    int min = array[0];
//    int max = array[0];
//
//    for (int i = 0; i < 7; i++) {
//        if (array[i] < min) {
//            min = array[i];
//        } else if (array[i] > max) {
//            max = array[i];
//        }
//    }
//
//    printf("Min: %d\nMax: %d\n", min, max);
    
//    // FUNCTIONS (refer to 'functions.h')
//    greeting();
//
//    printf("%d\n", add(56, 12));
//
//    printf("%.2f\n", multiply(5, 9));
    
//    // STRUCTS
//    struct Phone iphone = {"Apple", "iPhone Xr", 720.00f};
//    printf("%s - $%.2f\n", iphone.model, iphone.price);
    
//    // POINTERS
//    int number = 91;
//    int * pNumber = &number;
//    printf("%p\n", pNumber);
//    printf("%d\n", *pNumber);
//    
//    struct Shape rectangle = {4.0f, 7.5f};
//    printf("%.2f\n", calc(&rectangle));
    
    // WORKING WITH FILES
    FILE *file = fopen("test.txt", "w");
    
    fprintf(file, "Hello, World!\n");
    
    fclose(file);
    
    return 0 ;
}
