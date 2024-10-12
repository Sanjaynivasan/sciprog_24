#include<stdio.h>
#include<math.h>

#define pi acos(-1)

int main()
{
    float m_pi = M_PI;
    float acos_pi = acos(-1);
    printf("m_pi = %.16f\n", m_pi);
    printf("acos_pi = %.16f\n", acos_pi);
    printf("The Defined pi is %.16f\n",pi);
    return 0;
}