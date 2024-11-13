#include <iostream>
#include <string>
using namespace std;

struct Student {
    long int NISN;
    string name;
    int Value;
};

int main() {
    Student arr[7] = {
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9952382180, "Ari Lutfianto", 65},
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9965653989, "Arief Budiman", 60},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70}
    };

    long int query = 9950310962; 
    int i = 0, j = 7 - 1; 
    bool found = false;

    // Perform binary search
    while (i <= j && !found) {
        int mid = (i + j) / 2;  
        if (arr[mid].NISN == query) {  
            found = true;  
            cout << "Student found: " << arr[mid].name << ", NISN: " << arr[mid].NISN << ", Value: " << arr[mid].Value << endl;
        } else if (arr[mid].NISN < query) {  
            i = mid + 1;
        } else {  
            j = mid - 1;
        }
    }

    if (!found) {
        cout << "Student with NISN " << query << " not found." << endl;
    }

    return 0;
}
