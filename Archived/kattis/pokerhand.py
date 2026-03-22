def main():
    hand = list(input().split())

    frequency = {}

    for card in hand:
        frequency[card[0]] = frequency.get(card[0], 0) + 1

    max = 0
    for key, value in frequency.items():
        if value > max: max = value

    print(max)

main()