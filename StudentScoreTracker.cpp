#include <iostream>
#include <string>
using namespace std;

// Class definition for student
class student {
private:
    int ID;
    string first;
    string last;
    float m1;
    float m2;
    float m3;
    float m4;
    float avg;

public:
    // Constructor with default values
    student() {
        ID = 0000;
        first = "NA";
        last = "NA";
        m1 = 0;
        m2 = 0;
        m3 = 0;
        m4 = 0;
        avg = 0;
    }

    // Accessor methods
    int getID() { return ID; }
    string getFirst() { return first; }
    string getLast() { return last; }
    float getM1() { return m1; }
    float getM2() { return m2; }
    float getM3() { return m3; }
    float getM4() { return m4; }
    float getAvg() { return avg; }

    // Function to input student information
    int inputStudentInfo() {
        cout << "Enter student ID: ";
        cin >> ID;
        cout << "Enter first name: ";
        cin >> first;
        cout << "Enter last name: ";
        cin >> last;
        cout << "Enter score 1 of 4: ";
        cin >> m1;
        cout << "Enter score 2 of 4: ";
        cin >> m2;
        cout << "Enter score 3 of 4: ";
        cin >> m3;
        cout << "Enter score 4 of 4: ";
        cin >> m4;
        return 0;
    }

    // Function to compute average score
    int computeAvgScore() {
        avg = (m1 + m2 + m3 + m4) / 4;
        return avg;
    }

    // Function to display student information
    void displayStudentInfo() {
        cout << ID << "\t"
             << first << " "
             << last << " \t"
             << m1 << " " << m2 << " " << m3 << " " << m4 << "\t\t"
             << avg << endl;
    }
};

// Main function that asks for the number of students and prints the default value if 0 students are there.
// Creates 2 objects for the class, one for the first loop and one for the second
// If students more than 0 then the first loop will run 
// and runs the student info and compute avg for each student
// then prints it into a list
// If input is 0 then it will show the default value

int main() {
    int x;
    cout << "Enter number of students: ";
    cin >> x;
    student st[x], stt;

    if (x != 0 && x > 0) {
        for (int i = 0; i < x; i++) {
            st[i].inputStudentInfo();
            st[i].computeAvgScore();
        }
        cout << "Student Details: " << endl;
        cout << "ID\t Name\t\t Exams Score\t Average Score\n";
        cout << "----\t -------\t -----------\t -------------\n";
        for (int i = 0; i < x; i++) {
            st[i].displayStudentInfo();
        }
    } else {
        cout << "Student Details: " << endl;
        cout << "ID\t Name\t\t Exams Score\t Average Score\n";
        cout << "----\t -------\t -----------\t -------------\n";
        stt.displayStudentInfo();
    }

    return 0;
}
