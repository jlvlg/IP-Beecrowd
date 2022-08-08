while int(input()):
    games = [x for x in input().split(" ")]
    print(f"Mary won {games.count('0')} times and John won {games.count('1')} times")