import me_py #내가 만든 모듈 가져오기
me_py.me() #모듈 내의 함수 가져오기

def prime():#소수 판별 함수 설정
    for i in range(2,num,1): #i가 2부터num-1까지 반복
        if num%i==0:
            return False #나누어 떨어지면 소수가 아님
    return True
          

num=1 #초기값 설정 
while True: #무한루프 사용하기
    num=int(input("Input a number: "))
    if num>1:
        if prime()==True: #true일 때 소수임을 출력
            print(num," is a Prime number")
        elif prime()==False: #false일 때 소수가 아님을 출
            print(num," is not a Prime number")
    elif num==1:
        print("1 is not a Prime number")

    if num<=0:#0 이하의 값 입력 시 빠져나왹
        print("Finished")
        break
    

