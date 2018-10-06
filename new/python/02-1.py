#점수의 평균
print("홍길동씨의 과목별 점수는 각각 다음과 같다.")
print("국어 80, 영어 75, 수학 55")

korea = 80
english = 75
math = 55
score = (korea + english + math)/3.0

print(score)

#나눗셈의 몫 과 나머지
print("17의 몫은 %d" %(17%3)+" 나머지는 %d" %(17//3))


#자연수의 홀짝
num = int(input("주어진 자연수가 홀수인지 짝수인지 판별 입력 : "))


if num%2 is 0:
    print("%d 는 짝수입니다." %num)
else:
    print("%d 는 홀수입니다." %num)
