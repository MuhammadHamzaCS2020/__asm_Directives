// Muhammad Hamza
// 1602028

#include <iostream>
#include <stdlib.h>
extern "C" int asmMain(int[],int,int);

// This Function Initialize the Array with Random number rang is (1-50)
void InitializeArray(int Arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		Arr[i] = rand() % 50;
	}
}
    // This Function Display the Array Data
void Display(int arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main(void) {
	const int SIZE = 10;
	int Array1[SIZE],Num;
	std::cout << "Enter the No: ";
	std::cin >> Num;                    // Get the Number from the user 
	
	InitializeArray(Array1, SIZE);      // Initialize the Array Function Call
	std::cout << "The Initial Values of Array are :\n";
	Display(Array1, SIZE);              // Display the Initial Values of Array 
	asmMain(Array1,Num,SIZE);           // Call Assembly Function to and Pass the Array, Num and SIZE of Array 
	std::cout << "The Values of Array After Multiplication of "<<Num<<" :\n"; 

	Display(Array1, SIZE);             // Display the Array Data After Multiply the Number

	return 0;
}