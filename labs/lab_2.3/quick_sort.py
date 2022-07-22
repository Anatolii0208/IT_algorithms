def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    elem = arr[0]
    left = list(filter(lambda x: x < elem, arr))
    middle = [i for i in arr if i == elem]
    right = list(filter(lambda x: x > elem, arr))

    return quick_sort(left) + middle + quick_sort(right)


n = int(input())

l = [int(i) for i in input().split()]
print(*quick_sort(l))
