matring = [input() for _ in range(4)]
result = "".join(chr((int("".join(x[0] for x in matring)) * int("".join(x[y] for x in matring)) + int("".join(x[-1] for x in matring))) % 257) for y in range(1, len(matring[0])-1))
print(result)
print()