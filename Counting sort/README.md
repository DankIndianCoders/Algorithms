# Counting Sort
It is a sorting technique based on the keys i.e. objects are collected according to keys which are small integers. Counting sort calculates the number of occurrence of objects and stores its key values. New array is formed by adding previous key elements and assigning to objects.

### Complexity
Time Complexity: O(n+k) is worst case where n is the number of element and k is the range of input.

Space Complexity: O(k) k is the range of input.

Complexity	Best Case	Average Case	Worst Case
Time Complexity	Ω(n+k)	θ(n+k)	O(n+k)
Space Complexity			O(k)
Limitation of Counting Sort
- It is effective when range is not greater than number of object.
- It is not comparison based complexity.
- It is also used as sub-algorithm for different algorithm.
- It uses partial hashing technique to count the occurrence.
- It is also used for negative inputs.
### Algorithm
- STEP 1 START
- STEP 2 Store the input array
- STEP 3 Count the key values by number of occurrence of object
- STEP 4 Update the array by adding previous key elements and assigning to objects
- STEP 5 Sort by replacing the object into new array and key= key-1
- STEP 6 STOP
