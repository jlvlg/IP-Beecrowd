from math import factorial

while True:
    try: values = [int(x) for x in input().split(" ")]
    except EOFError: break
    print(factorial(values[0]) + factorial(values[1]))