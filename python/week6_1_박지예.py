def me(): #학과 학번 이름 함수로 만들어 출력하기
    print("학과: 사이버보안 \n학번: 2467013 \n이름: 박지예") 
def max(n1,n2,n3): #최댓값 반환하는 함수 만들기
    if n1>n2:
        if n1>n3: #n1이 가장 큰 경우
            return(n1)
        else: #n3가 가장 큰 경우
            return(n3)
    else: 
        if n2>n3: #else문 내에서도 두 케이스가 있음
            return(n2)
        else: #만족하지 않으면 n3 반환
            return(n3)
            

me() #학과 학번 이름 함수 가져오기
print("세 정수를 입력하세요.")
n1=int(input("n1: ")) #정수 3개 입력받기(정수값으로 변환)
n2=int(input("n2: "))
n3=int(input("n3: "))

biggest= max(n1,n2,n3) #최댓값을 biggest라는 변수에 담기

print(n1,",",n2,",",n3,"중 가장 큰 수는 ",biggest,"입니다") #결과 문장 출력



