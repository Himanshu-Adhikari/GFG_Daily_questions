"""
Given an array arr[], return the sum of the XOR of all elements for every possible subset of the array. Subsets with the same elements should be counted multiple times.
An array a is a subset of an array b if a can be obtained from b by deleting some (possibly zero) elements of b.
Note: The answer is guaranteed to fit within a 32-bit integer.
"""
class Solution:
    def subsetXORSum(self, arr):
        n = len(arr)
        res=0
        for i in arr:
            res|=i
        return (2**(n-1))*res
