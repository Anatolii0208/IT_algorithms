arr1 = [int(i) for i in input().split()]
arr2 = [int(i) for i in input().split()]

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
print(*result)
