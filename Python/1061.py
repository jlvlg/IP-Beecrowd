dhms = (86400, 3600, 60, 1)
time = tuple([int(input()[4:]) * dhms[0] + sum([int(v) * dhms[i+1] for i, v in enumerate(input().split(":"))])] for k in range(2))
time = time[1][0] - time[0][0]
final_time = []
for t in range(len(dhms)):
    final_time.append(time // dhms[t])
    time -= (time // dhms[t]) * dhms[t]
result = ("dia(s)", "hora(s)", "minuto(s)", "segundo(s)")
[print(final_time[a], result[a]) for a in range(len(final_time))]