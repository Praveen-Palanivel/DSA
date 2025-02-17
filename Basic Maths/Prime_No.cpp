//Program for checking whether the given number is prime or not

#include<iostream>
#include<cmath>
using namespace std;

bool Prime(int n)
{
    if(n<=1){
        return false;
    }
    //It is enough to check till sqrt(n) because it includes all possible factors.
    
    /*If a number is not a perfect square:Each factor larger than sqrt(n) pairs with a factor smaller than sqrt(n).
        Example: Non-perfect square (n = 20)
        Factors of 20:
        1 × 20
        2 × 10  
        4 × 5

      If a number is a perfect square:One pair of factors consists of the square root repeated twice.
        Example 2: Perfect square (n = 36)
        Factors of 36:
        1 × 36
        2 × 18
        3 × 12
        4 × 9
        6 × 6 ← (This pair has both factors equal to the square root)
    */
    
    for(int i=2;i<=sqrt(n);i++){        
        if(n%i==0){                    
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << Prime(n);
    return 0;
}