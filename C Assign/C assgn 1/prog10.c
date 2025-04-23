#include<stdio.h>
#include<math.h>
void main(){
    float a, b, c, dis, real, img, root1, root2 ;
    printf(" Comapare you Quadratic Equation with the standard form of Quadratic Equation 'ax² + bx + c = 0' ");
    printf("enter the values of the coefficients 'a', 'b', 'c' \n");
    scanf("%f%f%f", &a, &b, &c);
    dis = b * b - (4*a*c) ;  
    if (dis < 0){
        real = -b / (2*a);
        img = (sqrt(-dis) / (2*a));
        printf("Roots are complex and imaginary\n");
        printf("Root1: %.2f + %.2fi\n",real,img);
        printf("Root2: %.2f - %.2fi\n",real,img);
    }
    else if (dis == 0)
    {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal\n");
        printf("Roots are :%f",root2);
    }
    else{
        root1 = (-b + sqrt(dis)) / (2*a); 
        root2 = (-b - sqrt(dis)) / (2*a);
        printf("Roots are real and dsitinct\n");
        printf("The roots of the quadratic equation are: %.2f\n,%.2f\n",root1,root2);
    }
      
}