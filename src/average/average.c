#include "average.h"

float average(float arr[], unsigned int size) {

    float total = 0;
    for(unsigned int i = 0; i < size; i++) {
        total += arr[i];
    }

    if(size == 0) {
        return 0.0;
    }

    return total / (float)size;
}