//
// Created by Abi Liu on 1/29/25.
//
#include <iostream>
using namespace std;

int getInt() {
  int num;

}

int main() {
  char op;
  cout << "Select an operator:" << " +, -, *, /" << endl;
  cin >> op;
  int num1, num2;
  cout << "Enter two numbers:" << endl;
  cin>>num1;
  cin>>num2;
  switch (op) {
    case '+':
      cout << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 * num2 << endl;
      break;
    case '/':
      if(num2 == 0) {
        cout << "Error! Division by zero!" << endl;
        break;
      }
      cout << num1 / num2 << endl;
      break;
    default:
      cout << "Invalid operator! Please try again";
  }
    return 0;
}