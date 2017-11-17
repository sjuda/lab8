#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
float **newMatrix(int n, int m)
{
    float **matrix = new float *[n];
    for(int i = 0; i < n; i++)
    {
        matrix[i] = new float [m];
        memset(matrix[i], 0,m*sizeof(matrix[0]));
    }
    return matrix;
}
