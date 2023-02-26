#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    int job[n], arrival_time[n], service_time[n], completion[n], start[n], turnaround[n], waiting[n];

    // Enter the jobs:
    cout << "Enter the jobs (in sequence): ";
    for (int i = 0; i < n; i++) {
        cin >> job[i];
    }

    // Enter the arrival times:
    cout << "Enter the arrival times: ";
    for (int i = 0; i < n; i++) {
        cin >> arrival_time[i];
    }

    // Enter the service times:
    cout << "Enter the service times: ";
    for (int i = 0; i < n; i++) {
        cin >> service_time[i];
    }

    // Calculate completion times, start times, turnaround times, and waiting times:
    completion[0] = arrival_time[0] + service_time[0];
    start[0] = arrival_time[0];
    turnaround[0] = completion[0] - arrival_time[0];
    waiting[0] = 0;

    for (int i = 1; i < n; i++) {
        if (completion[i-1] <= arrival_time[i]) {
            start[i] = arrival_time[i];
        } else {
            start[i] = completion[i-1];
        }
        completion[i] = start[i] + service_time[i];
        turnaround[i] = completion[i] - arrival_time[i];
        waiting[i] = start[i] - arrival_time[i];
    }

    // Output completion times, start times, turnaround times, and waiting times:
    cout << "Job\tArrival\tService\tCompletion\tStart\tTurnaround\tWaiting\n";
    for (int i = 0; i < n; i++) {
        cout << job[i] << "\t" << arrival_time[i] << "\t" << service_time[i] << "\t" << completion[i] << "\t\t" << start[i] << "\t" << turnaround[i] << "\t" << waiting[i] << endl;
    }

    // Calculate average turnaround time and average waiting time:
    double avg_turnaround = 0, avg_waiting = 0;
    for (int i = 0; i < n; i++) {
        avg_turnaround += turnaround[i];
        avg_waiting += waiting[i];
    }
    avg_turnaround /= n;
    avg_waiting /= n;

    cout << "Average turnaround time: " << avg_turnaround << endl;
    cout << "Average waiting time: " << avg_waiting << endl;

    return 0;
}
