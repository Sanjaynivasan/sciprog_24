#include<stdio.h>
#include<math.h>

int main(  ){
    int N = 12;
    float a = 0;
    float b = 60;

    float b_rad;    
    b_rad=(M_PI * b) / 180;
    float sum = tan(a)  + tan(b_rad);

    printf("The sum before the loop is %f\n", sum);

    // int i;
    // for (i = 0; i < 60; i = i+5)
    // {
    //     sum += 2 * ((i * M_PI) / 180);
    // }

    int i = 5;
    while (i<60)
    {
        sum += 2 * tan((i * M_PI) / 180);
        i += 5;
    }

    sum = ((b_rad - a)/(2 * N)) * sum;
    printf("The sum after the loop is %f\n", sum);
    printf("The real value is %f\n", logf(2));
    
    float abs_diff = fabs(sum - logf(2));
    float rel_diff = fabs(1 - (sum/logf(2)));
    
    printf("The abs_diff is %f \n The rel_diff is %f\n ", abs_diff, rel_diff);
    return 0;

}