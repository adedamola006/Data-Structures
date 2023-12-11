#include <iostream>
#include <string>
using namespace std;

int main()
{

    // write a program in C++ that scans a string supplied by a user and determines whether the string is a palindrome or not
    bool checkPalindrome ( string s ){

    int n = s.length();

    for ( int i = 0; i <= n/2; i++ )
    {
        if ( s[i] != s[n-1-i] )
            return false;
    }
    return true;
    }

}
