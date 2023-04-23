#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivot = arr[(left + right) / 2];
        int i = left - 1;
        int j = right + 1;
        while (true) {
            do {
                i++;
            } while (arr[i] < pivot);
            do {
                j--;
            } while (arr[j] > pivot);
            if (i >= j) {
                break;
            }
            swap(arr[i], arr[j]);
        }
        quickSort(arr, left, j);
        quickSort(arr, j + 1, right);
    }
}

int main() {
    vector<int> arr;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr.push_back(x);
    } 
    quickSort(arr, 0, arr.size() - 1);
    for (int i = arr.size()-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}
