def main():
    T = int(input())

    for i in range(T):
        n = int(input())
        value = int(input())
        max = -200000
        for k in range(1, n):
            new_value = int(input())
            if value - new_value > max: max = value - new_value
            if value <= new_value:
                value = new_value
        print(max)

main()