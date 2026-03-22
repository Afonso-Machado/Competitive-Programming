def main():
    L, x = map(int, input().split())
    population = 0
    res = 0
    for i in range(x):
        action, value = input().split()
        value = int(value)

        if action == "enter":
            if population + value <= L: # ALl good
                population += value
            else:
                res += 1
        
        if action == "leave":
            population -= value
    
    print(res)

main()