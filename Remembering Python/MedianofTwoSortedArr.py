# two array sizes of m an n
# find the median

def MedianofArr(arr1, arr2):

    arr1 = sorted(arr1 + arr2)
    if(len(arr1)%2 == 0):
        return ((arr1[(len(arr1)//2)-1] + arr1[(len(arr1)//2)])/2)
    else:
        return arr1[len(arr1)//2]


print(MedianofArr([1,2],[3,5]))
