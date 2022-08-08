while any(time := [int(x) for x in input().split(" ")]):
    if (result := (time[2] * 60 + time[3]) - (time[0] * 60 + time[1])) < 0: result += 1440
    print(result)