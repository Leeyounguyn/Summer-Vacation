list = input("숫자를 입력 받으면 그에 해당하는 자릿수를 출력 숫자 입력 : ")

list = str(list)

if len(list) == 1:
    print("입력 : "+"%s" %list + " 출력 :1의자리수")
else:
    po = pow(10, len(list)-1)
    print("입력 : "+"%s" %list + " 출력 :"+ "%d" %po+"의자리수")
