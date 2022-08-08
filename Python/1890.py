for _ in range(int(input())):
    c, d = (int(x) for x in input().split())
    result = 26**c * 10**d
    print(f"{result if any((c, d)) else 0}")