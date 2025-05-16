https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

We use a hash array (like a frequency counter):

Make a hash array of size N + 1 (since numbers are from 1 to N)

For each element in the original array, increase its count in the hash array

Then scan the hash:

If a number’s count is 2, it’s repeating

If a number’s count is 0, it’s missing


TC and SC will be O(N)