import me_py #내가 만든 모듈 가져오기
me_py.me() #모듈 내의 함수 가져오기

def k(): #숫자 출력하는 함수 만들기
    if num>0: #0보다 클때만 딱 나타나도록
        for i in range(1,num+1): #중첩 for문 사용하기
            for j in range(1,i+1): #밖의 변수가 안의 반복횟수에 영향
                print(j,end=" ")
            print()
    else: #0 이하는 입력 오류 출력
        print("입력 오류")

num=1 #초기값 설정
while True: #무한루프 사용하기
     num=int(input("양의 정수 입력: "))
     k() #k함수 불러오기
     print()
     if num<=0: #0 이하일땐 빠져나오기
         break
    
