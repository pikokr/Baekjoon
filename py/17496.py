n, t, c, p = map(int, input().split(' '))

x = n // t

if n % t == 0:
    x -= 1

print(x * c * p)
