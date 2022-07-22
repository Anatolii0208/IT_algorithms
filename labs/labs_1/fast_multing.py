import re


def fastPow(a, b, k):
    if b == 0:
        return 1
    elif b % 2 == 0:
        return fastPow(a * a % k, b // 2, k)
    else:
        return ((a * (fastPow(a, b - 1, k)) % k) % k)

def main():
    a, b, k = map(int, input().split())
    print(fastPow(a, b, k))

if __name__ == '__main__':
    main()