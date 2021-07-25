for i in range(int(input())):
    n = int(input())
    zero = 1
    one = 0
    x = 0
    for j in range(n):
        x = one
        one = one + zero
        zero = x
    print(zero, one)
