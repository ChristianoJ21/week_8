#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string NISN;
    string Name;
    int Value;
};


void printStudents(const vector<Student>& students) {
    for (const auto& student : students) {
        cout << "NISN: " << student.NISN << ", Name: " << student.Name << ", Value: " << student.Value << "\n";
    }
}

// Selection Sort by NISN in descending order
void selectionSortByNISN(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;  // Assume the current element is the largest
        for (int j = i + 1; j < n; j++) {
            if (students[j].NISN > students[maxIdx].NISN) {
                maxIdx = j;  // Update maxIdx if a larger NISN is found
            }
        }
        swap(students[i], students[maxIdx]);  // Swap the largest element to its correct position
    }
}

// Selection Sort by Value in descending order
void selectionSortByValue(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;  // Assume the current element is the largest
        for (int j = i + 1; j < n; j++) {
            if (students[j].Value > students[maxIdx].Value) {
                maxIdx = j;  // Update maxIdx if a larger Value is found
            }
        }
        swap(students[i], students[maxIdx]);  // Swap the largest element to its correct position
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
    selectionSortByNISN(students);
    cout << "After Selection Sort by NISN (Descending):\n";
    printStudents(students);

    // Sort by Value in descending order
    selectionSortByValue(students);
    cout << "\nAfter Selection Sort by Value (Descending):\n";
    printStudents(students);

    return 0;
}
