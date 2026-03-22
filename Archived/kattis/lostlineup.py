def main():
    n = int(input())
    array = [d for d in range(1, n+1)]
    for i, distance in enumerate(map(int, input().split())):
        array[distance+1] = i+2
    
    print(*array)

main()