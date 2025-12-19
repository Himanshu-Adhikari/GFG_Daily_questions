# You are conductor of a bus. You are given two arrays chairs[] and passengers[] of equal length, where chairs[i] is the position of the ith chair and passengers[j] is the position of the jth passenger. You may perform the following move any number of times:

# Increase or decrease the position of the ith passenger by 1 (i.e., moving the ith passenger from position x to x+1 or x-1)
# Return the minimum number of moves required to move each passenger to get a chair.
# Note: Although multiple chairs can occupy the same position, each passenger must be assigned to exactly one unique chair.

class Solution:
    def findMoves(self, chairs, passengers):
        chairs.sort(key=lambda x:x)
        passengers.sort()
        return sum([abs(i-j) for i,j in zip(chairs,passengers)])
        
