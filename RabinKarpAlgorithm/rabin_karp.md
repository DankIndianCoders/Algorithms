## Rabin Karp Algorithm 

This is the code for the Rabin Karp algorithm, which is used for pattern finding in a given string using a hash function. Unlike Naive string matching algorithm, it does not travel through every character in the initial phase rather it filters the characters that do not match and then performs the comparison

**Time complexity of this algorithm**
- Let the length of the string be m. 
- Let the length of the pattern to be found be n.

The average and best-case running time of the Rabin-Karp algorithm is O(n+m), but its worst-case time is O(nm). 
