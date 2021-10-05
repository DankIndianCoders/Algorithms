#include <bits/stdc++.h>
using namespace std;

//Program to compute the largest contiguous subarray sum using Kadane's Algorithm
//Time Complexity: O(n) where n is length of the array

int kadane_algorithm(vector<int> array){
	int max_sum = array[0], current_sum = array[0];
	
	for(int i = 1; i < array.size(); i++){
		current_sum = max(current_sum + array[i], array[i]);
		max_sum = max(max_sum, current_sum);
	}
	return max_sum;
}


int main(){
	vector<int> array{-2, -3, 4, -1, -2, 1, 5, -3};
	int largest_sum = kadane_algorithm(array);
	cout<<"Largest contiguous Subarray sum: " << largest_sum;
	return 0;
}