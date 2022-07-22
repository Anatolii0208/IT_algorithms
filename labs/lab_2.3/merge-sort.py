# 1) Devide array into two parts while array.size > 1
# when array's length is 1 it is sorted so we can return him


def sorted_lists_combining(arr1, arr2):
    result = []

    i, j = 0, 0
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            result.append(arr1[i])
            i += 1
        else:
            result.append(arr2[j])
            j += 1
    if i == len(arr1):
        result += arr2[j:]
    else:
        result += arr1[i:]
    return result


def merge_sort(arr):
    if len(arr) == 1:
        return arr
    middle = len(arr) // 2
    left = merge_sort(arr[:middle])
    right = merge_sort(arr[middle:])
    return sorted_lists_combining(left, right)


lst = [1, 3, 5, 5, 3, 1, 10, 9]
print(*merge_sort(lst))
