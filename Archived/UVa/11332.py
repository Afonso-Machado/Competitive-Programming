import sys

def main():
    n = input()
    while (int(n) != 0):
        array = [int(d) for d in n]
        while (len(array) != 1):
            array = [int(d) for d in str(sum(array))]

        print(array[0])
        n = input()

main()