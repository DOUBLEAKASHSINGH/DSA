#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &arr, int arrSize){
    int i, j;
    for(j = 1; j < arrSize; j++){
        int key = arr[j];
        for(i = j-1; i>=0; i--){
            if(key < arr[i]){
                arr[i+1] = arr[i];
            }else{
                break;
            }
        }
        arr[i+1] = key;
    }
    return 0;
}

int main(){
    int arrSize;
    cin >> arrSize;
    vector<int> arr(arrSize);
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }
    insertionSort(arr, arrSize);
    for(int i = 0; i <arrSize; i++){
        cout << arr[i] << " ";
    }

    return 0;
}