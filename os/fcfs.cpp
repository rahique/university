#include <iostream>
#include <algorithm>
using namespace std;
struct Process {
    int pid, at, bt, ct, tat, wt, start;
};
void printGantt(Process p[], int n) {
    cout << "\nGantt Chart:\n|";
    for (int i = 0; i < n; i++) {
        cout << "  P" << p[i].pid << "  |";
    }
    cout << "\n0";
    for (int i = 0; i < n; i++) {
        int width = 6; // matches "  Px  |" width
        // right-align the CT under each block
        cout << "     " << p[i].ct;
    }
    cout << "\n";
}
int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    Process p[n];
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "P" << p[i].pid << " - Arrival Time: ";
        cin >> p[i].at;
        cout << "P" << p[i].pid << " - Burst Time: ";
        cin >> p[i].bt;
    }
    sort(p, p + n, [](Process a, Process b) {
        return a.at < b.at;
    });
    int time = 0;
    float sumTAT = 0, sumWT = 0;
    for (int i = 0; i < n; i++) {
        if (time < p[i].at) time = p[i].at;
        p[i].start = time;
        p[i].ct    = time + p[i].bt;
        p[i].tat   = p[i].ct - p[i].at;
        p[i].wt    = p[i].tat - p[i].bt;
        time       = p[i].ct;
        sumTAT    += p[i].tat;
        sumWT     += p[i].wt;
    }
    cout << "\nPID\tAT\tBT\tST\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++)
        cout << "P" << p[i].pid   << "\t"
             << p[i].at    << "\t"
             << p[i].bt    << "\t"
             << p[i].start << "\t"
             << p[i].ct    << "\t"
             << p[i].tat   << "\t"
             << p[i].wt    << "\n";
    cout << "\nAverage TAT = " << sumTAT / n;
    cout << "\nAverage WT  = " << sumWT  / n << "\n";
    printGantt(p, n);
    return 0;
}