jump = int(input().split(" ")[0])
pipes = [int(x) for x in input().split(" ")]
heights = [abs(pipes[a+1] - pipes[a]) for a in range(len(pipes)-1)]
if any([height > jump for height in heights]): print("GAME OVER")
else: print("YOU WIN")