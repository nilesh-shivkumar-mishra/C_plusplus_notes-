#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_process;
    int burst_time[30], waiting_time[30], turnaround_time[30];
    float average_waiting_time = 0.0, average_turnaround_time = 0.0;

    // Input the number of processes
    cout << "Enter the Number of Processes to Execute: ";
    cin >> total_process;

    // Input the burst times of the processes
    cout << "Enter the Burst Time of Processes:\n";
    for (int count = 0; count < total_process; count++) {
        cout << "Process [" << count + 1 << "]: ";
        cin >> burst_time[count];
    }

    // Sort the processes based on burst time
    for (int i = 0; i < total_process - 1; i++) {
        for (int j = i + 1; j < total_process; j++) {
            if (burst_time[i] > burst_time[j]) {
                int temp = burst_time[i];
                burst_time[i] = burst_time[j];
                burst_time[j] = temp;
            }
        }
    }

    // Initialize waiting time for the first process
    waiting_time[0] = 0;

    // Calculate waiting times
    for (int count = 1; count < total_process; count++) {
        waiting_time[count] = waiting_time[count - 1] + burst_time[count - 1];
    }

    // Calculate turnaround times and averages
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int count = 0; count < total_process; count++) {
        turnaround_time[count] = burst_time[count] + waiting_time[count];
        average_waiting_time += waiting_time[count];
        average_turnaround_time += turnaround_time[count];
        cout << "Process [" << count + 1 << "]\t" 
             << burst_time[count] << "\t\t" 
             << waiting_time[count] << "\t\t" 
             << turnaround_time[count] << endl;
    }

    // Calculate and print averages
    average_waiting_time /= total_process;
    average_turnaround_time /= total_process;

    cout << "\nAverage Waiting Time = " << fixed << setprecision(2) << average_waiting_time << endl;
    cout << "Average Turnaround Time = " << fixed << setprecision(2) << average_turnaround_time << endl;

    return 0;
}
