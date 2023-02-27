#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ex free(ptr);
    float **ptr;
    int i,m,n;
    ptr=(float**)malloc(m*sizeof(float*));
    for(i=0;i<m;i++)
    {
        ptr[i]=(float*)malloc(n*sizeof(float));
    }
    //----ans-----//
    for (i = 0; i < m; i++)
        free(ptr[i]);
    free(ptr);
    //------------//

}