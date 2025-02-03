//Program to check whether the given number is palindrome or not

#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rem, rev = 0, temp;
        temp = x;
        while (x > 0) {
            rem = x % 10;
            rev = (rev * 10) + rem;
            x = x / 10;
        }
        if (temp == rev) {
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    Solution obj;
    int x;
    cin >> x;
    cout << obj.isPalindrome(x);
    return 0;
}

