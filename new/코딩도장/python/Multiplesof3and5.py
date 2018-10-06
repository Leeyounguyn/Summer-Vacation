#집합 자료형(set 사용)
set1 = set(range(3,1000,3))
set2 = set(range(5,1000,5))
set3 = set1 | set2
result = sum(set3)
print(result)

#집합 자료형 X
sum = 0
print("sum의 초기값 %d" , sum)
for i in range(1, 1000):
    if i%3 ==0 or i% 5 ==0:
        sum+=i

print(sum)
