#include<iostream.h>
void swapWithoutThirdVar(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to swap: ";
    cin >> num1 >> num2;
    cout << "Before swapping - num1: " << num1 << ", num2: " << num2 << endl;
    swapWithoutThirdVar(&num1, &num2);
    cout << "After swapping - num1: " << num1 << ", num2: " << num2 << endl;
}
