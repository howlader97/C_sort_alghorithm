#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
    return 3*x - cos(x) -1;
}


int main()
{
    float a, b, c, c1 , tol, vala, valb, valc;
    int iter, i;

    printf("1st Value of a = ");
    scanf("%f",&a);
    printf("1st Value of b = ");
    scanf("%f",&b);
            printf("Tolerance = ");
    scanf("%f",&tol);
    printf("Number of iteration = ");
    scanf("%d",&iter);

    if(f(a) * f(b) < 0)
    {
        for(i = 1; i <= iter; i++)
        {
            vala = f(a);
            valb = f(b);
            c = (a + b) / 2;
            valc = f(c);
            if(vala * valc <= 0)
            {
                b = c;
                c1 = (a + b)/2;
            }

            else
            {
                a = c;
                c1 = (a + b)/2;
            }

            if((fabs(c-c1))<=tol){
                printf("Approximate iteration is %d iteration root value is %lf\n",i,c1);
                break;
            }
printf("%d iteration root value is %lf\n",i,c1);
        }
    }



    else
    {
        printf("No root value between a & b.");
    }
    return 0;

}
