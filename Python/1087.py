while all(coord := [int(x) for x in input().split(" ")]):
    if coord[0:2] == coord[2:4]: print(0)
    elif abs(coord[3] - coord[1]) == abs(coord[2] - coord[0]): print(1)
    elif coord[0] == coord[2] or coord[1] == coord[3]: print(1)
    else: print(2)