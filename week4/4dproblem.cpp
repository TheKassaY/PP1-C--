#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n][n];
    a[0][0] = 0;
    for (int i = 0; i < n; i++){
        a[i][0] = i;
    }
    for (int i = 0; i < n; i++){
        a[0][i] = i;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != 0 && j != 0){
                a[i][j] = i* j;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}