#include<stdio.h>

void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main()
{
    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k; //Loop indices

    //Initialise Matrices A,B,C

    //Mat A
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            A[i][j] = i+j;
        }
    }

    //Mat B
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j] = i-j;
        }
    }

    //Mat C
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j] = 0.0;
        }
    }
    //Perform Matrix Mult
    matmult(n, p, q, A, B, C); 

    //Displaying Matrix A
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%3.0f ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Displaying Matrix B
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Displaying Matrix C
    for(i=0;i<n;i++){
        for(j=0;j<q;j++){
            printf("%3.0f ",C[i][j]);
        }
        printf("\n");
    }
    return 0;

}

/* void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q])
{
    int i, j, k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0;k<p;k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}
*/
