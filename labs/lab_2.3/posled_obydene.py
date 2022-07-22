n = int(input())
if n == 1:
    print(1)
    exit(0)
elif n == 2:
    print(4)
    exit(0)
arr1 = [i * i for i in range(1, n // 3 * 2 + 100)]
arr2 = [i * i * i for i in range(1, n // 3 + 100)]

result = []

i, j = 0, 0
while i < len(arr1) and j < len(arr2):
    if arr1[i] < arr2[j]:
        result.append(arr1[i])
        i += 1
    elif arr1[i] == arr2[j]:
        result.append(arr1[i])
        i += 1
        j += 1
    else:
        result.append(arr2[j])
        j += 1
if i == len(arr1):
    result += arr2[j:]
else:
    result += arr1[i:]
print(result[n - 1])
