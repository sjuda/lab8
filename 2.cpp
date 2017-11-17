#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void deleteMatrix(float*** m, int n)
{
    float ** matrix = *m;
        for (int i = 0; i < n; i++)
            delete[] matrix[i];
        delete[] matrix[n];
    (*m) = nullptr;
}
