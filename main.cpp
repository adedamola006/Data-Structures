#include <iostream>
#include <stack>
using namespace std;

int main()
{
   // Question 2: a program that scans whether a string supplied is a palindrome or not.

   stack <int> push_stack;
   push_stack.push(0);
   push_stack.push(1);
   push_stack.push(2);
   push_stack.push(3);
   push_stack.push(4);

   while (!push_stack.empty()) {
    cout << " " << push_stack.top();
    push_stack.pop();
   }
}
