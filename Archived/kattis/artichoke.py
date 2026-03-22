import math

def main():
    p, a, b, c, d, n = map(int, input().split())

    numbers = []

    for i in range(1, n+1):
        value = p*(math.sin(a*i + b) + math.cos(c*i + d) + 2)
        numbers.append(value)

    value = numbers[0]
    max = 0

    for k in range(1, n):
        if (value >= numbers[k]):
            if (value - numbers[k] > max):
                max = value - numbers[k]
        else:
            value = numbers[k]

    print(max)
    return 0

main()