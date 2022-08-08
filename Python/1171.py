values = [int(input()) for a in range(int(input()))]
[print(i, "aparece", values.count(i), "vez(es)") for i in sorted(set(values))]