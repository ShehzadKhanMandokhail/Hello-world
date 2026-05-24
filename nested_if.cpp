#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double gpa;
    int attendancePercent;

    cout << "=== University Student Evaluation ===" << endl;
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter GPA (0.0 to 4.0): ";
    cin >> gpa;

    cout << "Enter attendance (%): ";
    cin >> attendancePercent;

    cout << "\n--- Results for " << studentName << " ---\n";

    // if - else: check if student is in good academic standing
    if (gpa >= 2.0) {
        cout << "Academic standing: Good (enrolled)\n";

        // nested if: scholarship and honors based on GPA and attendance
        if (gpa >= 3.5) {
            cout << "Grade level: Excellent\n";

            if (attendancePercent >= 90) {
                cout << "Scholarship: Full merit scholarship eligible!\n";
            } else if (attendancePercent >= 75) {
                cout << "Scholarship: Partial merit scholarship (improve attendance)\n";
            } else {
                cout << "Scholarship: High GPA, but attendance too low for scholarship\n";
            }
        } else if (gpa >= 3.0) {
            cout << "Grade level: Very good\n";

            if (attendancePercent >= 85) {
                cout << "Honors: Dean's List candidate\n";
            } else {
                cout << "Honors: Good GPA; raise attendance to join Dean's List\n";
            }
        } else {
            cout << "Grade level: Satisfactory\n";
            cout << "Tip: Keep GPA above 3.0 for honors and scholarships\n";
        }
    } else {
        cout << "Academic standing: Probation\n";

        // nested if: how serious the probation is
        if (gpa < 1.0) {
            cout << "Warning: At risk of dismissal from the university\n";
        } else {
            cout << "Action: Meet your academic advisor this semester\n";
        }
    }

    // if - else: library access (campus life example)
    if (attendancePercent >= 60 && gpa >= 1.5) {
        cout << "Library card: Active\n";
    } else {
        cout << "Library card: Restricted until attendance/GPA improve\n";
    }

    return 0;
}
