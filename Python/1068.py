for n in range(10000):
    try: string = input()
    except EOFError: break
    count = 0
    for x in string:
        if x == "(": count += 1
        if x == ")": count -= 1
        if count == -1: break

    if count != 0: print("incorrect")
    else: print("correct")