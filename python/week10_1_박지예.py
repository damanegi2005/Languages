import hi #자기소개 모듈
hi.me()

n1,n2=0,0 #초기화
while True: #n1 양수조건 위한 while 문
    n1=int(input("양수 n1입력: "))
    if n1>0:
        break
while True: #n2도 마찬가지
    n2=int(input("양수 n2입력: "))
    if n2>0:
        break
set_k=set() #빈 집합 만들기
for i in range(1,n1+1): #집합에 넣기 위한 for문
    if n1%i==0:
        set_k.add(i) #추가하는 메소드 이용
set_u=set() #빈 집합 만들기
for i in range(1,n2+1):
    if n2%i==0:
        set_u.add(i) #n2도 똑같이 추가

print("<",n1,"의 약수>\n",sorted(list(set_k)),"\n<",n2,"의 약수>\n",sorted(list(set_u))) #약수 출력문

set_gong=set(set_k&set_u) #공약수 집합
set_choi=max(set_gong) #최대공약수 집합

print("<{},{}의 공약수>\n".format(n1,n2),sorted(list(set_gong)),"\n<{},{}의 최대공약수>\n".format(n1,n2),set_choi)


    

