secret = input()
crib = input()

if len(secret) == len(crib):
    print(f"{int(all(crib[x] != secret[x] for x in range(len(crib))))}")
else:
    print([any(crib[x] == secret[x+y] for x in range(len(crib))) for y in range(len(secret) - len(crib) + 1)].count(False))

