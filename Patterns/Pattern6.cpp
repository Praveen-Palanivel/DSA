//Program for printing a Inverted Numbered Right Pyramid

#include <iostream>
using namespace std;

void Pattern(int n){
    for(int i=n;i>=1;i--){
        int k=1;
        for(int j=1;j<=i;j++){
            cout << k++ << " ";
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