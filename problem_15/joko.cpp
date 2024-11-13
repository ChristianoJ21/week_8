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

    // Loop through the array and change name to Joko if Value is 60
    for (int i = 0; i < 7; i++) {
        if (arr[i].Value == 60) {
            arr[i].name = "Joko";
        }
    }

    cout << "Updated Student List:\n";
    for (int i = 0; i < 7; i++) {
        cout << "NISN: " << arr[i].NISN << ", Name: " << arr[i].name << ", Value: " << arr[i].Value << endl;
    }

    return 0;
}
