//Program for printing a Right-Angled Number Pyramid - II

#include <iostream>
using namespace std;

void Pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << "";
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