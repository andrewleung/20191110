#include <stdio.h>
#include <stdlib.h>
struct complex
{
        double real, imag;
};
typedef struct complex Complex;

void displayComplex(Complex x);

int main()
{
        int x, y, z, rv;
        Complex c1, c2;
        double array[2];
        /*there re two different methods of getting values here because i was previously having trouble storing values*/
        printf("Enter real and imaginary part of complex number C1: ");
/*      for(x=0; x<2; x++)
        {
                scanf("%lf", &array[x]);
                printf("Array[%d]: %lf", x, array[0]);
        }
        c1.real=array[0];
        c1.imag=array[1]; */

        scanf("%lf%lf", &c1.real, &c1.imag);
        //scanf("%f%f", &c1.imag, &c1.imag);
        //C1.real=0; testing statement, I was having trouble reading in values.
        printf("Enter real and imaginary part of complex number C2: ");
        scanf("%lf%lf", &c2.real, &c2.imag);
        //printf("C1: %g %g, C2: %g %g\n", c1.real, c1.imag, c2.real, c2.imag); error checking statement
        do
        {
                if(x<1||x>8)
                        printf("\nInvalid. Choose options 1-8.\n\n");
                printf("1\tDisplay two complex numbers (precision is 3 for all displays)\n2\tShow the polar format of each complex number\n3\tShow the conjugate of each complex number\n4\tCalculate and display the addition of two complex numbers\n5\tCalculate and display the subtraction of two complex numbers\n6\tCalculate and display the multiplication of two complex numbers\n7\tCalculate and display the division of two complex numers");
                printf("\nUser input: ");
                rv=scanf("%d", &x);
                if(rv!=1)
                {
                        printf("Invalid option.\n");
                        exit(1);
                }
        }
        while(x<1||x>8);
        while(x!=8)
        {
                switch(x)
                {
                        case 1:
                                if(c1.real!=0&&c1.imag!=0)
                                {
                                        printf("C1: ");
                                        displayComplex(c1);
                                }
                                if(c2.real!=0&&c2.imag!=0)
                                {
                                        printf("C2: ");
                                        displayComplex(c2);
                                }
                                break;
        /*              case 2:
                                polarComplex(c1);
                                polarcomplex(c2);
                                break;
                        case 3:
                                conjugateComplex(c1);
                                conjugateComplex(c2);
                                break;
                        case 4:
                                addComplex(c1, c2);
                                break;
                        case 5:
                                subtractComplex(c1, c2);
                                break;
                        case 6:
                                multipyComplex(c1, c2);
                                break;
                        case 7:
                                divideComplex(c1, c2);
                                break; */
                        case 8:
                                exit(0);
                }
        }
        return 0;
}

//display complex number
void displayComplex(Complex x)
{
        if(x.real==0&&x.imag!=0)
        {
                printf("%lfi\n", x.imag);
                //exit(0);
        }
        if(x.real!=0&&x.imag==0)
        {
                printf("%lf\n", x.real);
                //exit(0);
        }
        if(x.real!=0&&x.imag>0)
        {
                printf("%lf+i%lf\n", x.real, x.imag);
                //exit(0);
        }
        if(x.real!=0&&x.imag<0)
        {
                printf("%lf%lf\n", x.real, x.imag); //if a value is negative, it will automatically print a negative sign, but the same is not true for positive values.
        }
}
//caulcate and display polar format of a complex number
/*void polarComplex(Complex)
{

}
//calculate and display conjugate of a complex number
void conjugateComplex(Complex);
//calculate and display addition of two complex numbers
void addComplex(Complex, Complex);
//calculate and display subtraction of two complex numbers
void subComplex(Complex, Complex);
//calculate and display multiplication
void multiplyComplex(Complex, Complex);
//calculate and display division
void divideComplex(Complex, Complex);*/



