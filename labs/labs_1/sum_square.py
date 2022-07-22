def main():
    n = int(input())
    print((n * n * (n + 1) * (n + 1)) // 4 % (10 ** 9 + 7) )


if __name__ == '__main__':
    main()