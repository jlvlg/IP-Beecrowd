while True:
    try: input()
    except EOFError: break
    snail = sorted([int(x) for x in input().split(" ")])[-1]
    if snail < 10: print(1)
    elif snail < 20: print(2)
    else: print(3)