#include <bits/stdc++.h>

int main() {
   using namespace std;
    int n;
    cin >> n;
    int numArr[n];
    for(int i = 0; i<n; i++){
        cin >> numArr[i];
    }

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(numArr[j]>numArr[j+1]){
                int temp = numArr[j];
                numArr[j] = numArr[j+1];
                numArr[j+1] = temp;
            }
        }
    }
     for (int i = 0; i < n; i++) {
        cout << numArr[i] << " ";
    }
    return 0;
}

