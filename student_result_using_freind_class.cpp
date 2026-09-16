#include <iostream>
using namespace std;

class ResultAnalyzer;

class StudentResult {
private:
    int rollNo;
    string name;
    float s1;
    float s2;
    float s3;
    static int totalStudents;

public:
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        s1 = m1;
        s2 = m2;
        s3 = m3;
        totalStudents++;
    }

    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    ~StudentResult() {
        cout << "StudentResult object destroyed for Roll No: " << rollNo << endl;
    }

    friend class ResultAnalyzer;
};

int StudentResult::totalStudents = 0;

class ResultAnalyzer {
public:
    void analyze(StudentResult &s) {
        float total = s.s1 + s.s2 + s.s3;
        float percentage = total / 3;

        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (s.s1 >= 40 && s.s2 >= 40 && s.s3 >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    StudentResult s1(101, "mohan", 85, 78, 90);
    StudentResult s2(102, "Rohan", 35, 60, 70);

    ResultAnalyzer analyzer;

    analyzer.analyze(s1);
    cout << endl;
    analyzer.analyze(s2);
    cout << endl;

    StudentResult::displayTotalStudents();

    return 0;
}