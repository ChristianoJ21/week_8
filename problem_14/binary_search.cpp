#include <iostream>
#include <string>
using namespace std;

struct Student {
    long int NISN;
    string name;
    int Value;
};

int main() {
    bool found = false;
    Student arr[7] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    int i = 0, j = sizeof(arr) / sizeof(arr[0]) - 1, k;
    long int query = 9950310962;

    // Binary Search Loop
    while (!found && i <= j) {
        k = (i + j) / 2;
        if (arr[k].NISN == query) {
            found = true;
            cout << "Student found: " << arr[k].name << " with Value: " << arr[k].Value << endl;
        } else if (arr[k].NISN < query) {
            i = k + 1;
        } else {
            j = k - 1;
        }
    }

    if (!found) {
        cout << "Student with NISN " << query << " not found." << endl;
    }

    return 0;
}
