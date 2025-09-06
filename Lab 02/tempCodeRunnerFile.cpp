#include <iostream>
using namespace std;

int main() {
    int students = 5, subjects = 4;

    
    int** marks = new int*[students];
    for (int i = 0; i < students; i++)
        marks[i] = new int[subjects];

   
    cout << "Enter marks of 5 students (4 subjects each):\n";
    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cin >> marks[i][j];
        }
    }

    
    cout << "\n-- Total Marks per Student --\n";
    int highestTotal = marks[0][0], topStudent = marks[0][0];
    for (int i = 0; i < students; i++) {
        int total = 0;
        for (int j = 0; j < subjects; j++) {
            total += marks[i][j];
        }
        cout << "Student " << i + 1 << ": " << total << endl;
        if (total > highestTotal) {
            highestTotal = total;
            topStudent = i + 1;
        }
    }

    
    cout << "\n-- Average Marks per Subject --\n";
    for (int j = 0; j < subjects; j++) {
        int sum = 0;
        for (int i = 0; i < students; i++) {
            sum += marks[i][j];
        }
        float avg = (float)sum / students;
        cout << "Subject " << j + 1 << ": " << avg << endl;
    }

   
    cout << "\nStudent with highest total marks: Student " << topStudent 
         << " (Total = " << highestTotal << ")\n";

    
    for (int i = 0; i < students; i++)
        delete[] marks[i];
    delete[] marks;

    return 0;
}
