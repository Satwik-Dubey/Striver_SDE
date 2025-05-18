Approach:
The steps are as follows:

First, we will declare a map to store the prefix XORs and their counts.
Then, we will set the value of 0 as 1 on the map.
Then we will run a loop(say i) from index 0 to n-1(n = size of the array).
For each index i, we will do the following:
We will XOR the current element i.e. arr[i] to the existing prefix XOR.
Then we will calculate the prefix XOR i.e. xr^k, for which we need the occurrence.
We will add the occurrence of the prefix XOR xr^k i.e. mpp[xr^k] to our answer.
Then we will store the current prefix XOR, xr in the map increasing its occurrence by 1.