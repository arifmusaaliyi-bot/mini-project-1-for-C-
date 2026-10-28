
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5] = {0};
    float average[5];
    int top = 0;

    // Read student names and marks
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin.getline(names[i], 20);

        cout << "Enter three marks: ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
            total[i] += marks[i][j];
        }

        cin.ignore(100, '\n');

        average[i] = total[i] / 3.0;
    }

    // Find the top student
    for (int i = 1; i < 5; i++) {
        if (total[i] > total[top]) {
            top = i;
        }
    }

    // Print mark sheet
    cout << "\n\n";
    cout << left
         << setw(20) << "Name"
         << setw(8) << "M1"
         << setw(8) << "M2"
         << setw(8) << "M3"
         << setw(10) << "Total"
         << setw(10) << "Average" << '\n';

    cout << string(64, '-') << '\n';

    for (int i = 0; i < 5; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(8) << marks[i][0]
             << setw(8) << marks[i][1]
             << setw(8) << marks[i][2]
             << setw(10) << total[i]
             << fixed << setprecision(2)
             << average[i] << '\n';
    }

    cout << "\nTop student: " << names[top] << '\n';
   

    return 0;
}
