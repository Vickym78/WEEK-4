// Find Unique element in Array.(in array [1,2,1,4,2,3,4,5,5])

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 4, 2, 3, 4, 5, 5};

    for (int i = 0; i < 9; i++) {
        bool flag = true; // Reset flag for each element
        for (int j = 0; j < 9; j++) {
            if (arr[i] == arr[j] && i != j) { // Check for duplicate elements
                flag = false;
                break;
            }
        }
        if (flag) { // If flag is true, it means the element is unique
            cout << arr[i] << " ";
        }
    }


}
