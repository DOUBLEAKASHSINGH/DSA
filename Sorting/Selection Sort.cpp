// Time complexity is O(n^2) for all cases.
// Space complexity is O(1)

#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> & arr, int arrSize){
    int i, j, minIndex;
    for(i = 0; i < arrSize-1; i++){
        minIndex = i;
        for(j = i + 1; j < arrSize; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    return 0;
}

int main() {
    int arrSize;
    cin >> arrSize;
    vector<int> arr(arrSize);
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    cout << "Unsorted array: ";
    for(int i = 0; i < arrSize; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort(arr, arrSize);
    for(int i = 0; i < arrSize; i ++){
        cout << arr[i] << " ";
    }
    return 0;
}
