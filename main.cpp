#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Welcome to Grade Analysis Project\n\n";
    string name;
    string subjects[4], failedSubs = "";
    double grades[4];
    int failCount = 0;
    cout << "Name: ";
    getline(cin, name);
    cout << "Enter 4 subjects:\n";
    for (int i = 0; i < 4; i++) {
        getline(cin, subjects[i]);
    }
    cout << "Enter grades:\n";
    for (int i = 0; i < 4; i++) {
        do {
            cout << subjects[i] << ": ";
            cin >> grades[i];
            if (grades[i] < 0 || grades[i] > 100)
                cout << "Invalid! Enter a grade between 0 and 100.\n";
        } while (grades[i] < 0 || grades[i] > 100);
    }
    double avg = 0;
    for (int i = 0; i < 4; i++) {
        avg += grades[i];
        if (grades[i] < 50) {
            failCount++;
            failedSubs += subjects[i] + " ";
        }
    }
    avg /= 4;
    string res;
    if (failCount >= 3) {
        res = "Failed";
    }
    else if (failCount > 0) {
        res = "Not Passed";
    }
    else {
        if (avg == 100) res = "A+";
        else if (avg >= 90) res = "A";
        else if (avg >= 80) res = "B";
        else if (avg >= 70) res = "C";
        else if (avg >= 60) res = "D";
        else if (avg >= 50) res = "Passed";
        else res = "Failed";
    }
    cout << "\n" << name << ", average: " << avg << "\nResult: " << res;
    if (failCount > 0) cout << "\nFailed subjects: " << failedSubs << endl;

    return 0;
}
