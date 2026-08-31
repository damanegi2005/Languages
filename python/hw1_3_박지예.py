import me_py #내가 만든 모듈 가져오기
me_py.me() #모듈 내의 함수 가져오기

import random #random모듈 불러오기
dice=random.randint(1,6) #주사위 눈 랜덤으로 설정
num,tries=0,0 #초기값 설정

while True: #무한루프 사용
    num=int(input("주사위 눈을 맞혀보세요:"))
    if 1<=num<=6: #1이상 6이하일때만 계속 진행
        tries+=1
        if num==dice: #일치하면 빠져나오기
            print(tries,"번만에 맞혔습니다.")
            break
    else: #1미만,6 초과면 오류 문장 출력
        print("(범위를 벗어난 값입니다.)")
        tries+=1
        
        
