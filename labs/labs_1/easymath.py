def main():
    k = int(input())
    if k == 0:
        print(4)
    elif k % 4 == 1:
        print((2 + 3 + 1 + 4) % 5)
    elif k % 4 == 2:
        print((1 + 1 + 4 + 4) % 5)
    elif k % 4 == 3:
        print((4 + 3 + 2 + 1) % 5)
    elif k % 4 == 0:
        print(4)


if __name__ == '__main__':
    main()