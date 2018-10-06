#-*- coding: utf-8 -*-
num = 100

while True:
    stemp = str(num)
    bstemp = stemp[::-1]

    btemp = str(bin(num))
    btemp = btemp[2:]
    rbtemp = btemp[::-1]

    otemp = str(oct(num))
    otemp = otemp[2:]
    rotemp = otemp[::-1]


    if stemp == bstemp and btemp == rbtemp and otemp == rotemp :
        print(stemp)
        break;
    num = num+1
