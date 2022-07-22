n = int(input())
a = [int(i) for i in input().split()]

for i in range(1, len(a) + 1):
    if (2 * i <= n and a[i - 1] > a[2 * i - 1]) or (
        2 * i + 1 <= n and a[i - 1] > a[2 * i]
    ):
        print("NO")
        exit(0)
print("YES")
