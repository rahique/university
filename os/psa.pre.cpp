#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> at(n), bt(n), pr(n), rt(n), ct(n);
    for(int i=0;i<n;i++){
        cin >> at[i] >> bt[i] >> pr[i];
        rt[i]=bt[i];
    }
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq; // {priority,index}
    vector<string> g;
    vector<int> t;
    int time=0, done=0;
    while(done<n){
        for(int i=0;i<n;i++)
            if(at[i]==time)
                pq.push({pr[i],i});
        if(pq.empty()){
            time++;
            continue;
        }
        auto [p,i]=pq.top();
        pq.pop();
        string cur="P"+to_string(i+1);
        if(g.empty() || g.back()!=cur){
            g.push_back(cur);
            t.push_back(time);
        }
        rt[i]--;
        time++;
        if(rt[i]==0){
            ct[i]=time;
            done++;
        }
        else pq.push({pr[i],i});
    }
    t.push_back(time);
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