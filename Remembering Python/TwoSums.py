# Given an array of integers, return indices of the two numbers
# such that they add up to a specific target

def twoSums(arr, target):
    for x in range(0,len(arr)-1):
        for y in range(1,len(arr)):
            if(arr[x] + arr[y] == target):
                return [x,y]


print("indices are: ", twoSums([1,2,3,4,5,6,7], 13))