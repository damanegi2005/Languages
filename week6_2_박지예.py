def me(): #학과 학번 이름 함수로 만들어 출력하기
    print("학과: 사이버보안 \n학번: 2467013 \n이름: 박지예")
me() #me 함수 가져오기

def facto(num):#팩토리얼 함수 정의
    fact=1 #초기값 설정
    for i in range(1,num+1):
        fact=fact*i
    return fact #팩토리얼 값 반환하기
            
        

print("<while 조건문 사용>") #while 조건문 사용하기
num=1 #초기값 설정
while num!=0:#0이 아닐 때 실행되도록 하기
    num=int(input("*양수 입력(종료시 0 입력):")) #수 입력받기
    if num>0:
        print(num,"!=",facto(num)) #양수일 때 팩토리얼 값 출력하기
    elif num<0:#음수일 땐 값 출력 X
        print("음수가 입력되었습니다")
if num==0:#0일땐 종료하기
    print("0!=1 \n종료합니다")

print() #한 줄 띄기
print("<While True 사용>") 
num=1 #초기값 설정
while True: #while true 사용하기
     num=int(input("*양수 입력(종료시 0 입력):")) #수 입력받기
     if num>0:
         print(num,"!=",facto(num)) #양수일때 팩토리얼 값 출력하기
     elif num<0:#음수 입력받았을 때
         print("음수가 입력되었습니다.")
     else:
         break #0일땐 break 사용하여 빠져나오기
print("0!=1 \n종료합니다") 
    





