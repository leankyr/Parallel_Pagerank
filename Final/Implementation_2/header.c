#include"header.h"

void vector_normalize(float* v,int size){
    assert(v != NULL);
    float sum = 0.0;
    for (int i = 0; i < size; ++i){
        sum += v[i];
    }
    for (int i = 0; i < size; ++i){
        v[i] /= sum;                       
    }
}
