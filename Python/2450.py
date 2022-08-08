matrix = [[int(x) for x in input().split()] for _ in range(int(input().split()[0]))]
result = []
for line in range(len(matrix)):
    if not any(matrix[line]):
        result.append(any(any(x) for x in matrix[line+1:]))
        continue
    for element in range(len(matrix[line])):
        if matrix[line][element] != 0:
            result.append(any(any(y) for y in [x[:element+1] for x in matrix[line+1:]]))
            break

print(f"{'N' if any(result) else 'S'}")