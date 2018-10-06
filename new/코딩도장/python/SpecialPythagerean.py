#a2 + b2 = c2 피타고라수 a+b+c = 1000
for i in range(1, 1000):
    for j in range(1, i):
        for k in range(1, j):
                if pow(k,2)+pow(j,2)==pow(i, 2) and i+j+k == 1000:
                    print(i*j*k)
