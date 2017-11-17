#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

void transpose(float*** g, int n, int m)
{
    float ** matrix = *g;
    float t;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < m; ++j)
        {
            t = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = t;
        }
    }
}
