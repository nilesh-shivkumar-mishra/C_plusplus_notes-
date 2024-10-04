#include <iostream>
using namespace std;

int main() {
    int rq, Fr;
    cout << "Enter the Number of requests: ";
    cin >> rq;

    int page[rq];
    for (int i = 0; i < rq; i++) {
        cout << "Enter Page " << i + 1 << ": ";
        cin >> page[i];
    }

    cout << "Enter the Number of frames: ";
    cin >> Fr;

    int frame[Fr];
    for (int i = 0; i < Fr; i++) {
        frame[i] = -1;
    }

    int pageFault = 0, pageHit = 0;
    int front = 0;

    cout << "Page Replacement Process:" << endl;
    cout << "Page\t\tFrames" << endl;
    for (int i = 0; i < rq; i++) {
        int flag = 0;
        for (int j = 0; j < Fr; j++) {
            if (frame[j] == page[i]) {
                flag = 1;
                pageHit++;
                break;
            }
        }

        if (flag == 0) {
            pageFault++;
            for (int j = 0; j < Fr; j++) {
                if (frame[j] == -1) {
                    frame[j] = page[i];
                    break;
                }
            }

            if (frame[0] != -1) {
                frame[front] = page[i];
                front = (front + 1) % Fr;
            }
        }

        cout << page[i] << "\t\t";
        for (int j = 0; j < Fr; j++) {
            if (frame[j] == -1) {
                cout << "X\t";
            } else {
                cout << frame[j] << "\t";
            }
        }
        cout << endl;
    }

    cout << "Page Fault: " << pageFault << endl;
    cout << "Page Hit: " << pageHit << endl;

    return 0;
}
