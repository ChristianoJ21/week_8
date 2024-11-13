#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string NISN;
    string Name;
    int Value;
};

// Function to print the list of students
void printStudents(const vector<Student>& students) {
    for (const auto& student : students) {
        cout << "NISN: " << student.NISN << ", Name: " << student.Name << ", Value: " << student.Value << "\n";
    }
}

// Bubble Sort by Value in descending order
void bubbleSortByValue(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].Value < students[j + 1].Value) {
                swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Bubble Sort by NISN in descending order
void bubbleSortByNISN(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].NISN < students[j + 1].NISN) {
                swap(students[j], students[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<Student> students = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };


    // Sort by NISN in descending order
    cout << "After Bubble Sort by NISN (Descending):\n";
    bubbleSortByNISN(students);
    printStudents(students);

    // Sort by Value in descending order
    cout << "\nAfter Bubble Sort by Value (Descending):\n";
    bubbleSortByValue(students);
    printStudents(students);

    return 0;
}
