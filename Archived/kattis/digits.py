value = str(input())

while(value != "END"):
    index = 1
    while (str(len(value)) != value):
        value = str(len(value))
        index += 1
    
    print(index)
    value = str(input())