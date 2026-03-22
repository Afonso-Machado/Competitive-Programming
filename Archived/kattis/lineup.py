def main():
    n = int(input())

    name = input()
    possibility = ""

    for i in range(1, n):
        next_name = input()
        if possibility == "":
            if next_name > name:
                possibility = "INCREASING"
            else:
                possibility = "DECREASING"
        elif possibility == "INCREASING" and next_name < name:
            possibility = "NEITHER"
            break
        elif possibility == "DECREASING" and next_name > name:
            possibility = "NEITHER"
            break
        name = next_name
    
    print(possibility)

main()