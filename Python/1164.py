for x in range(int(input())):
    value = int(input())
    if sum([a for a in range(1, value) if value % a == 0]) == value: print(f"{value} eh perfeito")
    else: print(f"{value} nao eh perfeito")