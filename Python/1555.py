for x in range(int(input())):
    v = [int(x) for x in input().split(" ")]
    result = {"Rafael": (3*v[0])**2 + v[1]**2, "Beto": 2*(v[0]**2) + (5*v[1])**2, "Carlos": -100*v[0] + v[1]**3}
    k, v = list(result.keys()), list(result.values())
    print(k[v.index(sorted(v)[-1])], "ganhou")