# 1) Devide array into two parts while array.size > 1
# when array's length is 1 it is sorted so we can return him

cnt_inver = 0


def sorted_lists_combining(arr1, arr2):
    result = []
    global cnt_inver
    i, j = 0, 0
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            result.append(arr1[i])
            # cnt_inver += len(arr2) - j
            i += 1
        else:
            result.append(arr2[j])
            j += 1
            cnt_inver += len(arr1) - i
    if i == len(arr1):
        result += arr2[j:]
        # cnt_inver += i * (len(arr2) - j)
    else:
        result += arr1[i:]
        # cnt_inver += j * (len(arr1) - i)
    return result


def merge_sort(arr):
    if len(arr) == 1:
        return arr
    middle = len(arr) // 2
    left = merge_sort(arr[:middle])
    right = merge_sort(arr[middle:])
    return sorted_lists_combining(left, right)


n = int(input())
lst = [int(i) for i in input().split()]
# lst = [5, 4, 2, 1]
# print(*merge_sort(lst))
merge_sort(lst)
print(cnt_inver)
