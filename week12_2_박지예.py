import me #자기소개 모듈
me.hi()
import numpy as np #넘파이 np로 사용

while True: #전체 반복문
    num=int(input("nXn배열 행 크기(n은 홀수, 0 이하 입력시 종료: ")) #num입력
    if num<=0: #0이하 종료
        print("종료")
        break
    elif num%2==0:#짝수면 pass
        print("홀수가 아님")
    else:
        arange=np.arange(num*num) #일단 1차원으로 쭉
        cal=arange%2 #0과 1로 표현하기
        new=cal.reshape(num,num) #reshape 사용
        print(new)
            
