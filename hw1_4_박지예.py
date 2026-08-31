import me_py #내가 만든 모듈 가져오기
me_py.me() #모듈 내의 함수 가져오기

code=input("암호 설정(관리자): ") #암호 입력받기
tries=0 #초기값 설정
while True: #무한루프 사용하기
    a=input("로그인하려면 암호를 입력하세요: ")
    tries+=1 #시도 횟수 count
    if a==code:
        print(tries,"번만에 로그인 성공")
        break #암호와 일치하면 반복문 빠져나오기
    if tries==3:#조건문에 tries 사용하기
        print("3회 이상 실패하여 더 이상 시도할 수 없습니다.")
        break #3번 이상 실패하면 반복문 빠져나오기
        
