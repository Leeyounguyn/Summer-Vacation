input_num = input("완전수 구하기 입력으로 자연수 N을 받으면 출력으로 N이하의 모든 완전수를 출력합니다.")
sum = 0

for i in range(1, input_num+1):
    for j in range(1, i):
        if i % j == 0:
            sum +=j
    if sum == i:
        print(i)
    sum = 0 # 0 으로 sum의 값을 초기화 시켜 약수들의 합을 초기화시킨다.
