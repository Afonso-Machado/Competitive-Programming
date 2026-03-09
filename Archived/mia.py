def main() -> None:

    while (True):
        # Read input line
        s0, s1, r0, r1 = map(int, input().split())

        if (s0+s1+r0+r1 == 0): 
            break

        # Get dice value
        value1: int = s0*10+s1 if s0 > s1 else s1*10+s0
        value2: int = r0*10+r1 if r0 > r1 else r1*10+r0

        if (value1 == 21):
            print("Tie.") if value2 == 21 else print("Player 1 wins.")
            continue

        if (value2 == 21):
            print("Player 2 wins.")
            continue

        if (value1 % 11 == 0):
            if (value2 % 11 == 0):
                if (value1 > value2):
                    print("PLayer 1 wins.")
                elif (value1 < value2):
                    print("PLayer 2 wins.")
                else:
                    print("Tie.")
            else:
                print("Player 1 wins.")
            continue

        if (value2 % 11 == 0):
            print("Player 2 wins.")
            continue

        if (value1 > value2):
            print("Player 1 wins.")
        elif (value1 < value2):
            print("Player 2 wins.")
        else:
            print("Tie.")

    return None

main()