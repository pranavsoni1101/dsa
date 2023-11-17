def searchAlgo(arr, num): 
    for i in arr:
        if (arr[i]== num):
            return i
    # This is a check to avoid error 
    # incase number is not present in the array
    return -1

array = [1, 8, 7, 9, 5, 6]
num1 = 8

results = searchAlgo(array, num1)

if results != -1:
    print(num1, "found at index: ", results);
else:
    print("Number not present in array");