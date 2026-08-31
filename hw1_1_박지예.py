import me_py #내가 만든 모듈 가져오기
me_py.me() #모듈 내의 함수 가져오기

a=int(input("시작 정수 입력(0 이상): "))#시작 정수 입력받기
b=int(input("끝 정수 입력(0 이상): "))#끝 정수 입력받기
if a<0 or b<0: #음수가 포함되면 계산 ㄴㄴ
    print("입력된 값에 음수가 포함되어 있습니다.")
else:
    
 if a>b:#시작정수가 더 클때도 계산 하지않음
     print("끝 정수가 시작 정수보다 작습니다.")
 elif a==b: #같을때도 계산 하지않음
     print("시작 정수와 끝 정수가 같습니다.")
 else:
     sum=0 #초기값 설정
     if a%2==0: 
         if b%2==0:#두 수 모두 짝수일 때
             for i in range(a,b+1,2): #2씩 증가하도록 함
              sum+=i #복합대입연산자 사용
         else:
             for i in range(a,b,2): #시작 수만 짝수일 때
              sum+=i
     else: #if else문 사용
         if b%2==0: #끝 수만 짝수일 때
             for i in range(a+1,b+1,2):
              sum+=i
         else: #두 수 모두 홀수일 때3
             for i in range(a+1,b,2):
              sum+=i
     print(a,"부터 ",b,"까지의 짝수의 합:",sum) #sum값 출력하기
