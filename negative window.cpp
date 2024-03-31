#include <iostream>
#include <queue>
using namespace std;

void printfirstnegative(int *arr, int size, int k) {
    queue<int> indices; // Queue to store indices of negative elements
    int i;

    // Process the first window
    for (i = 0; i < k; i++) {
        if (arr[i] < 0)
            indices.push(i);
    }

    // Print the first negative element of the first window
    if (!indices.empty())
        cout << arr[indices.front()] << " ";
    else
        cout << "0 ";

    // Process the rest of the elements
    for (; i < size; i++) {
        // Remove indices which are out of the current window
        while (!indices.empty() && indices.front() <= i - k)
            indices.pop();

        // Add current index if the corresponding element is negative
        if (arr[i] < 0)
            indices.push(i);

        // Print the first negative element of the current window
        if (!indices.empty())
            cout << arr[indices.front()] << " ";
        else
            cout << "0 ";
    }
}

int main() {
    int arr[] = {2,-5,4,-1,-2,0,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    
    cout << "First negative of every " << k << "-size window: ";
    printfirstnegative(arr, size, k);

    return 0;
}

