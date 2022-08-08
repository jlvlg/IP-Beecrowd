from itertools import combinations

c = combinations((int(x) for x in input().split()), 3)
if any(x[0] + x[1] > x[2] and x[1] + x[2] > x[0] and x[0] + x[2] > x[1] for x in c):
    print("S")
else:
    print("N")