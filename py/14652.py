n, m, k = list(map(int, input().split(' ')))

x = 0
y = 0

while k != 0:
    if k >= m:
        k -= m
        y += 1
    else:
        k -= 1
        x += 1
print(y, x)
