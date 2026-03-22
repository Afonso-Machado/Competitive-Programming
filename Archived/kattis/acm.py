def main():
    line = input()
    result = [0, 0]
    attempts = {}

    while (len(line.split()) != 1):
        time, problem, answer = line.split()
        time = int(time)
        if answer == "right":
            result[0] = result[0] + 1
            result[1] = result[1] + time + attempts.get(problem, 0) * 20
        attempts[problem] = attempts.get(problem, 0) + 1
        line = input()

    print(*result)

main()