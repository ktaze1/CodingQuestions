def selectionSort(arr):
    for x in range(len(arr)):
        minIndex = x
        for location in range(x+1, len(arr)):
            if (arr[location] < arr[minIndex]):
                minIndex = location
        
        temp = arr[minIndex]
        arr[minIndex] = arr[x]
        arr[x] = temp

    return arr


numbers = [214, 2, 53, 52, 1, 5, 9, 15]

print(selectionSort(numbers))