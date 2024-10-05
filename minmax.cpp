#include<iostream>
#include<climits>
using namespace std;

int main(){
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = -1; // To store index of smallest
    int largestIndex = -1;  // To store index of largest

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i; // Update smallest index
        }

        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i; // Update largest index
        }
    }

    cout << "Smallest = " << smallest << ", at index = " << smallestIndex << endl;
    cout << "Largest = " << largest << ", at index = " << largestIndex << endl;

    return 0;
}
