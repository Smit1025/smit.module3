#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() 
{
    int choice;
    float num1, num2, result;

    do 
	{
        // Display the menu
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                // Input numbers and perform addition
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                // Input numbers and perform subtraction
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                // Input numbers and perform multiplication
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                // Input numbers and perform division
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 == 0) 
				{
                    printf("Error: Division by zero\n");
                } else {
                    result = divide(num1, num2);
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to perform addition
float add(float num1, float num2) 
{
    return num1 + num2;
}

// Function to perform subtraction
float subtract(float num1, float num2) 
{
    return num1 - num2;
}

// Function to perform multiplication
float multiply(float num1, float num2) 
{
    return num1 * num2;
}

// Function to perform division
float divide(float num1, float num2) 
{
    return num1 / num2;
}

