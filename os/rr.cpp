#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> bt(n), rem(n), wt(n), tat(n);
    for(int i = 0; i < n; i++) {
        cin >> bt[i];
        rem[i] = bt[i];
    }
    int t = 0;
    vector<int> gantt;
    while(true) {
        bool done = true;

        for(int i = 0; i < n; i++) {
            if(rem[i] > 0) {
                done = false;

                if(rem[i] > q) {
                    gantt.push_back(i+1);
                    t += q;
                    rem[i] -= q;
                } else {
                    gantt.push_back(i+1);
                    t += rem[i];
                    wt[i] = t - bt[i];
                    rem[i] = 0;
                }
            }
        }
        if(done) break;
    }
    for(int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
    cout << "Gantt: ";
    for(int i : gantt) cout << "P" << i << " ";
    cout << "\nWT: ";
    for(int i : wt) cout << i << " ";
    cout << endl;
    cout << "\nTAT: ";
    for(int i : tat) cout << i << " ";
    cout << endl;
}