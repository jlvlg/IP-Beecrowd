import math as m


while any(values := [int(x) for x in input().split()]):
    l, c, r1, r2 = values
    if l >= max(r1, r2)*2 and c >= max(r1, r2)*2:
        if m.sqrt(((l-r2)-r1)**2 + ((c-r2)-r1)**2) >= r2+r1 or l >= 2*r1 + 2*r2 or c >= 2*r1 + 2*r2:
            print("S")
        else:
            print("N")
    else:
        print("N")