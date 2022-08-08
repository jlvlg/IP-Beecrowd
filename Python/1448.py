from sys import stdin
stdin.reconfigure(encoding='latin-1')

for i in range(int(input())):
    og, t1, t2 = (input() for _ in range(3))
    score = [sum(1 for x in range(len(og)) if og[x] == y[x]) for y in (t1, t2)]
    print(f"Instancia {i+1}")
    if score[0] == score[1]:
        result = "empate"
        for char in range(len(og)):
            if og[char] != t1[char] and og[char] == t2[char]:
                result = "time 2"
                break
            if og[char] != t2[char] and og[char] == t1[char]:
                result = "time 1"
                break
        print(result)
    else:
        print(f"time {1 if score[0] > score[1] else 2}")
    print()