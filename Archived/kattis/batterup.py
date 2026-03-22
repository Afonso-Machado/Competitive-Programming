def main():
    n = int(input())
    array = list(map(int, input().split()))

    count = 0
    sum = 0
    for number in array:
        if number == -1: continue
        count += 1
        sum += number
    
    print(sum/count)


main()