import sys, string

def convert(name):
    letter_to_number = {letter: index for index, letter in enumerate(string.ascii_lowercase, start=1)}
    name = [letter_to_number[letter.lower()] for letter in name if letter in string.ascii_letters]
    value = sum(name)
    while value >= 10:
        values = [int(d) for d in str(value)]
        value = sum(values)

    return value

def main():
    for nameA in sys.stdin:
        nameB = input()
        value1 = convert(nameA)
        value2 = convert(nameB)

        print(f"{value2/value1*100:.2f} %") if value1 > value2 else print(f"{value1/value2*100:.2f} %")

main()