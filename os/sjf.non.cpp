#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> at(n), bt(n), ct(n);
    for(int i=0;i<n;i++)
        cin >> at[i] >> bt[i];
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
    vector<string> g;
    vector<int> t={0};
    int time=0, done=0;
    while(done<n){
        for(int i=0;i<n;i++)
            if(at[i]<=time && ct[i]==0)
                pq.push({bt[i],i}), ct[i]=-1;
        if(pq.empty()){
            time++;
            continue;
        }
        auto [b,i]=pq.top();
        pq.pop();
        g.push_back("P"+to_string(i+1));
        time += b;
        ct[i]=time;
        done++;
        t.push_back(time);
    }
    cout << "Gantt Chart:\n| ";
    for(auto x:g) cout << x << " | ";
    cout << "\n";
    for(auto x:t) cout << x << " ";
    double tat=0, wt=0;
    for(int i=0;i<n;i++){
        tat += ct[i]-at[i];
        wt += ct[i]-at[i]-bt[i];
    }
    cout << "\n\nAverage TAT = " << tat << endl;
    cout << "\nAverage WT = " << wt << endl;
}