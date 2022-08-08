for x in range(int(input())):
    value = int(input())
    if len([a for a in range(1, value) if value % a == 0]) != 1: print(f"{value} nao eh primo")
    else: print(f"{value} eh primo")