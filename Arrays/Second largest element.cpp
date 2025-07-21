#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secondLargest(const vector<int> arr){
    if(arr.size() < 2) {
        throw invalid_argument("Array must contain at least two elements.");
    }
    return 0;
}

int main() {
    int n;
    vector<int> arr;
    cout << "Enter the number of elements: ";
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int secondLargestValue = secondLargest(arr);
    cout << secondLargestValue << endl;
}
