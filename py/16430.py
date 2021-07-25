from fractions import Fraction

x, y = map(int, input().split(' '))

f = 1 - Fraction(x, y)

print(f.numerator, f.denominator)
