#include<stdio.h>
int main(){
    int choice;
    do
    {
        printf("\n-----Make a Choice------\n");
        printf("Choose '1' for Area of Rectangle\n");
        printf("CHoose '2' for Perimeter of Rectangle\n");
        printf("Choose '3' to EXIT\n");
        printf("Choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:{
            float length, breadth, area;
            printf("Enter the lenght of the rectangle: \n");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle:\n");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of the rectangle is: %f\n sq.units",area);
            break;
        }
        case 2: {
            float length, breadth, perimeter;
            printf("Enter the lenght of the rectangle: \n");
            scanf("%f", &length);
            printf("Enter the breadth of the rectangle:\n");
            scanf("%f", &breadth);
            perimeter = 2 * (length + breadth);
            printf("Perimeter of the rectangle is: %f\n units",perimeter);
            break;
        }
        case 3:
            printf("Thank You!!");
            break;
        default:
            printf("Invalid Entry. Please Try again!!");
            break;
        }
    } while (choice != 3);
    return 0;
    
}