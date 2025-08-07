// Time complexity is O(n^2) for average and worst.
// Time complexity is O(N) for best case if already sorted.
// Space complexity is O(1)

#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> & arr, int arrSize){
    int i, j;
    for(i = arrSize-1; i >= 0; i--){
        for(j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
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
    bubbleSort(arr, arrSize);
    for(int i = 0; i < arrSize; i ++){
        cout << arr[i] << " ";
    }
    return 0;
}
