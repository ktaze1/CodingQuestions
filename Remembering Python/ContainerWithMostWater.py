#Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
#n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
#Find two lines, which together with x-axis forms a container, such that the container contains 
#the most water.

# Note: You may not slant the container and n is at least 2.

def maxContainerSize(arr):
    area = 0
    for x in range(len(arr)-1):
        for y in range(1,len(arr)):
            if area < ((y-x) * (abs((arr[x]-arr[y])))):
                print(x,y)
                area = ((y-x)*(abs(arr[x]-arr[y])))
    return area

print(maxContainerSize([8,1,6,2,5,4,8,3,7]))