//5.	Find Array Contain Duplicate or not? (all element is unique or not)

#include<iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 6, 2, 8, 3, 12, 7, 9};
    bool flag = false; // Initialize flag to false

    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(arr[i] == arr[j]) {
                flag = true;
                break; // Exit inner loop if duplicate found
            }
        }
        if(flag) break; // Exit outer loop if duplicate found
    }

    if(flag) {
        cout << "YES" << endl; // If flag is true, duplicates found
    } else {
        cout << "NO" << endl; // If flag is false, no duplicates found
    }

    return 0;
}

