//Binary search. Searching a key in a sorted array
#include <iostream>
using namespace std;

int main(){
    int A[] = {1, 4, 7, 10, 30, 35, 46, 70, 73, 79, 80, 100, 120, 158, 190};
    int size = sizeof(A)/sizeof(int);
    int low = 0, high = size-1, mid, key, foundAt;
    bool flag = false;
    cout << "The given array:" << endl;
    for (int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "Enter search key: ";
    cin >> key;
    do {
        mid = (low + high) / 2;
        if (A[mid] == key){
            flag = true;
            foundAt = mid;
            break;
        }
        if (key > A[mid]){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    } while (low <= high);
    if (flag){
        cout << key << " found at " << foundAt << endl;
    } else {
        cout << "Searh failed" << endl;
    }
    return 0;
}