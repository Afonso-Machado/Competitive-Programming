def main():
    array = list(map(int, input().split()))
    array.sort()

    a = array[1] - array[0]
    b = array[2] - array[1]

    if a == b:
        print(array[2] + a)
    elif b > a:
        print(array[1] + a)
    else:
        print(array[0] + b)

main() 