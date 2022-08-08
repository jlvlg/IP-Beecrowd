while any(values := [int(x) for x in input().split(" ")]):
    result = "".join([a for a in str(values[1]) if a != str(values[0])])
    if result == "": result = 0
    print(int(result))