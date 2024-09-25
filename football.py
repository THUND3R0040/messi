n = int(input())
a = list(map(int, input().split()))
a.sort()
q = int(input())

def find_largest_less_than_sorted(arr, m):
    low, high = 0, len(arr) - 1
    result_index = -1

    while low <= high:
        mid = (low + high) // 2

        if arr[mid] <= m:
            result_index = mid
            low = mid + 1
        else:
            high = mid - 1

    return result_index

for i in range(q):
    m = int(input())
    print(find_largest_less_than_sorted(a, m) + 1)
    


    
    
def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
 
    while low <= high:
 
        mid = (high + low) // 2
 
        # If x is greater, ignore left half
        if arr[mid] < x:
            low = mid + 1
 
        # If x is smaller, ignore right half
        elif arr[mid] > x:
            high = mid - 1
 
        # means x is present at mid
        else:
            return mid
 
    # If we reach here, then the element was not present
    return -1