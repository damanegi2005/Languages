print("학과: 사이버보안학과") #학과학번이름 작성
print("학번: 2467013")
print("이름: 박지예")

number=int(input("양의 정수 입력: ")) #수 입력받기

if number>0: #입력받은 수가 0보다 클때 실행
   sum=0 #초기값은 0으로 설정
   for i in range(1,number+1): # for문 사용하여 반복
       sum=sum+ (1/i)
   print('결과값:%.2f'%sum) #소수 둘째자리까지 출력
else: #음수를 입력했다면 실행 안함
   print("입력값의 범위가 틀렸습니다.")
