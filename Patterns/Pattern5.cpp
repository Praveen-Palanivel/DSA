//Program for printing a Inverted Right Pyramid Pattern

#include <iostream>
using namespace std;

void Pattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    Pattern(n);
    return 0;
}