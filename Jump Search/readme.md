<h3> Jump Search </h3>
Jump Search is a faster algorithm than Binary search. It is just a modified form of binary search where a small range of numbers are found in which the desired number lies by jumping some indexes in between. Then the desired index is found out by using linear search in that particular small range. The number of indices jumped is preferred to be the square root of the length of array.<br>
Time Complexity: O(n/m + (m-1)) where n is the length of array and m is the jump size. <br>
