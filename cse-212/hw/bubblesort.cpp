#include <bits/stdc++.h>

int main() {
   using namespace std;
    int n;
    cin >> n;
    int numArr[n];
    for(int i = 0; i<n; i++){
        cin >> numArr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            if(numArr[i]>numArr[j]){
                int temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp;
            }
        }
    }
     for (int i = 0; i < n; i++) {
        cout << numArr[i] << " ";
    }
    return 0;
}

