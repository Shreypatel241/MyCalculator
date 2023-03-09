#include <stdio.h>
#include <stdlib.h>

	

int main() {
	printf("\nThis is a calculator made by Shrey\n");
	system("pause");
	system("cls");
	printf("\nThis is a simple calculator\n");
	
	char input;
	float num01, num02;
	
	printf("\nEnter the first number: ");
	scanf("%f", &num01);
	
	printf("\nEnter the second number: ");
	scanf("%f", &num02);

	getchar(); // clears the newline character from the buffer
	printf("\nSelect any one from the following: ");
	printf("\n* [Multiplication]");
	printf("\n/ [Division]");
	printf("\n+ [Addition]");
	printf("\n- [Subtraction]");
	printf("\nx [Exit]\n"); // added exit option to menu
	printf(":  ");
	scanf("%c", &input);
	
	//loops
	if (input == '*'){
		float ans = num01 * num02;
		printf("Your answer is : %f\n", ans);
	}
	else if (input == '/'){
		float ans1 = num01 / num02;
		printf("Your answer is : %f\n", ans1);
	}
	else if (input == '+'){
		float ans2 = num01 + num02;
		printf("Your answer is : %f\n", ans2);
	}
	else if (input == '-'){
		float ans3 = num01 - num02;
		printf("Your answer is : %f\n", ans3);
	}
	else if (input == 'x'){
	
		system("cls");
		printf("\nHave a great day!!\n");
	}
	else {
		system("cls");
		printf("Invalid Input!!!\n");
		printf("EXITING");
		system("pause");
	}

	system("pause");

	return 0;

	
}
