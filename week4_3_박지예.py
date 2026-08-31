print("전공: 사이버보안") #전공 학번 이름 출력하기
print("학번: 2467013")
print("이름: 박지예")

print("<사칙연산 계산하기>\n두 정수 a, b를 입력하세요")#a,b입력받기
a=int(input("a: "))#a 받아서 변수에 넣기
b=int(input("b: "))

dustks= input("원하는 연산을 입력하세요(+,-,*,/):" ) #연산자 입력받기

if dustks =='+':
          print("%d+ %d = %d" %(a,b,a+b)) #더하기 계산
elif dustks =='-':
         print("%d - %d = %d" %(a,b,a-b)) #빼기 계산
elif dustks =='*':
         print("%d * %d = %d" %(a,b,a*b)) #곱하기 계산
elif dustks =='/':
         print("%d / %d = %.2f" %(a,b,a/b)) #나눗셈 계산
else:
         print('잘못된 연산자입니다')

         


