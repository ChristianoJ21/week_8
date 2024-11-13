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

// Insertion Sort by NISN in descending order
void insertionSortByNISN(vector<Student>& students) {
    for (size_t i = 1; i < students.size(); ++i) {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].NISN < key.NISN) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

// Insertion Sort by Value in descending order
void insertionSortByValue(vector<Student>& students) {
    for (size_t i = 1; i < students.size(); ++i) {
        Student key = students[i];
        int j = i - 1;
        // Compare Value in descending order
        while (j >= 0 && students[j].Value < key.Value) {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
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
    insertionSortByNISN(students);
    cout << "After Insertion Sort by NISN:\n";
    printStudents(students);

    // Sort by Value in descending order
    insertionSortByValue(students);
    cout << "\nAfter Insertion Sort by Value:\n";
    printStudents(students);

    return 0;
}
