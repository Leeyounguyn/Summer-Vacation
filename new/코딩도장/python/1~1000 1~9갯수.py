a = []
for i in range(1, 1001):
    a.append(str(i))

for i in range(0, 10):
    print(("".join(a)).count(str(i)))
