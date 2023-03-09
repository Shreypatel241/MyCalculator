#include <stdio.h>
#include <stdlib.h>

float multFunc(float num1, float num2){
	float ansW = num1 * num2;
	return ansW;
}

float divFunc(float num1, float num2){
	float ansW = num1 / num2;
	return ansW;
}

float addFunc(float num1, float num2){
	float ansW = num1 + num2;
	return ansW;
}

float subFunc(float num1, float num2){
	float ansW = num1 - num2;
	return ansW;
}

int main() {
	printf("\nThis is a calculator made by Shrey\n");
	system("pause");
	system("cls");
	printf("\nThis is a simple calculator\n");

    float in1, in2;
    printf("\nEnter the first integer: ");
    scanf("%f", &in1);

    printf("Enter the second integer: ");
    scanf("%f", &in2);

    char charIn; 
    printf("Enter the expression(*, /, +, -): ");
    getchar();
    scanf("%c", &charIn);

    float result;

    if (charIn=='*')
    {
        result = multFunc(in1, in2);
        printf("\nThe product is %f\n", result);
        system("pause");
    }
    else if (charIn=='/'){
        result = divFunc(in1, in2);
        printf("\nThe quotient is %f\n", result);
        system("pause");
    }
    else if (charIn=='+'){
        result = addFunc(in1, in2);
        printf("\nThe sum is %f\n", result);
        system("pause");
    }
    else if (charIn=='-'){
        result = subFunc(in1, in2);
        printf("\nThe difference is %f\n", result);
        system("pause");
    }
    else{
        printf("\nINVALID INPUT\n");
        system("pause");
    }


	return 0;

	
}
