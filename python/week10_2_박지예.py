import hi #자기소개 모듈
hi.me()

student1=[('123','Tom','010-111-1111','Seoul'),('124','Jane','010-222-2222','Busan'),('125','Candy','010-333-3333','Incheon')]
idonly=[id[0] for id in student1] #id만 가져오는 리스트 만들기

print("\n<학생명단>")
dic={} #일단 빈 문자열
for a,b,c,d in student1: #for문 사용하여 간단출력
    dic[a]=b #하나씩 반복
    print(a,":",b)

stu1=student1[0] #tom관련 
stu2=student1[1] #jane관련
stu3=student1[2] #candy관련


while True: #while문 사용하여 계속 반복
    k=input("\n조회할 학번은?(종료시 0입력) ")
    if k=='0': #0이면 종료
        print("종료")
        break #break문 사용하여 빠져나오기
    elif k in idonly: #학번이 있을 때
        if k=='123': #하나씩 if문
            print("id: ",stu1[0],"\nname: ",stu1[1],"\nphone: ",stu1[2],"\naddress: ",stu1[3]) #리스트에서 추출
        if k=='124':
           print("id: ",stu2[0],"\nname: ",stu2[1],"\nphone: ",stu2[2],"\naddress: ",stu2[3])
        if k=='125':
            print("id: ",stu3[0],"\nname: ",stu3[1],"\nphone: ",stu3[2],"\naddress: ",stu3[3])
        
        
    else: #학번이 대치되는게 없으면 없다고 출력
        print("해당 학번은 없음")

