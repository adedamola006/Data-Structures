#include <iostream>

using namespace std;

int main()
{
   // Question 2: a program that scans whether a string supplied is a palindrome or not.

   stack <int> my_stack;
   my_stack.push(0);
   my_stack.push(1);
   my_stack.push(2);
   my_stack.push(3);
   my_stack.push(4);

   while (!my_stack.empty()) {
    cout << " " << my_stack.top();
    mystack.pop();
   }
}
