//
//  structs.h
//  CodeExampleC
//
//  Created by Begzod Bakhriddinov on 26/02/21.
//

//#ifndef structs_h
//#define structs_h
//
//
//#endif /* structs_h */

#include <stdio.h>

struct Phone {
    char companyName[40];
    char model[40];
    float price;
};

struct Shape {
    float width, height;
};
// function to find the area of a shape
float calc(struct Shape *object) {
    return object->height * object->width;
}
