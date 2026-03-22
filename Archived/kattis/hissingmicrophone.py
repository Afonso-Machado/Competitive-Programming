def main():
    word = input()

    flag = False
    printed = False
    for letter in word:
        if letter == 's':
            if flag:
                printed = True
                print("hiss")
                break
            else: flag = True
        else: flag = False

    if not printed: print("no hiss")

    return

main()