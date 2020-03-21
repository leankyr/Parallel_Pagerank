#ifndef HEADER_H
#define HEADER_H

#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<math.h>
#include<omp.h>
#include<sys/time.h>
#include<string.h>



typedef struct matrix
{
    float** elements;
    unsigned int size;
}matrix;

typedef struct vector
{
    float* elements;
    unsigned int size;
}vector;


int Initialize(FILE **data_fp, int argc); 
float** memAlloc(int size);
void matrixTranspose(const matrix* m);
void matrixDisplay(const matrix* m);
void Power_Method(vector* tmp, const matrix* m, vector* v);
void matrix_free(matrix* m);

unsigned int calculate_links(const matrix* m, unsigned int row);
float calculate_probability(const matrix* m, unsigned int i, unsigned int j);
    
void vector_init(vector* v, unsigned int size);
void vector_free(vector* v);
void vector_normalize(vector* v);
void vector_sort(vector* v);
void vector_display(vector* v);

int float_comparator(const void* a, const void* b);
int compare_floats(float a, float b);


void countOutlinks(matrix* A, vector* out_link, int size);
void stochastiphyMatrix(matrix* A, vector* out_link, int size);
void setToZero(matrix* m, int size);

void gaussSiedel(vector* tmp, const matrix* A,  vector* P);
void createMatrixM(const matrix* A,float d);





#endif // HEADER_H


