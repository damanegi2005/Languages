print("학과: 사이버보안학과") #학과학번이름 작성
print("학번: 2467013")
print("이름: 박지예")

max=min=number=int(input("양의 정수 입력(0이하 입력): "))#값 받고 시작하기
if number<0:
    print("max: ",number)
    print("min: ",number)
else: 
    while number>0:     #while문 사용하여 반복
        number=int(input("양의 정수 입력(0이하 입력): ")) #조건 만족할때 계속 값 받기
        if number>max:  #max값 대체
            max=number
        elif 0<number<min:#min값 대체
            min=number
    print("max: ",max)  #마지막으로 max, min 출력하기
    print("min: ",min)
