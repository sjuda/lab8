#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
void snake(float*** g,int n,int m)
{
    float **matrix = *g;
    for (int i = 0; i < n*m; i++){
        matrix[i / n][(n-1)*((i / n)%2) + (int)pow(-1, i / n) * i%n] = i;
    }
}
