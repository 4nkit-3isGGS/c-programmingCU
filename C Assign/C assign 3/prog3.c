#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Decimal to Binary
            int decimal, binary[32], i = 0;

            printf("Enter a decimal number: ");
            scanf("%d", &decimal);

            if (decimal == 0) {
                printf("Binary: 0\n");
                break;
            }

            while (decimal > 0) {
                binary[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
            }

            printf("Binary: ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binary[j]);
            }
            printf("\n");
            break;
        }

        case 2: {
            // Binary to Decimal
            long long binary;
            int decimal = 0, base = 1, rem;
            
            printf("Enter a binary number: ");
            scanf("%lld", &binary);
            
            long long x = binary;

            while (binary > 0) {
                rem = binary % 10;
                if (rem != 0 && rem != 1) {
                    printf("Invalid binary number!\n");
                    return 1;
                }
                decimal += rem * base;
                base *= 2;
                binary /= 10;
            }

            printf("Decimal number of %lld is: %d\n",x, decimal);
            break;
        }

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

