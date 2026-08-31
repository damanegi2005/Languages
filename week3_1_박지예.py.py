print("전공: 사이버보안") #전공, 학번, 성명 출력하기
print("학번: 2467013")
print("성명: 박지예")

number= int(input("세 자리 양의 정수를 입력하세요: "))#세자리 정수 받기
print("입력한 수:", number)

hundred= number//100 #각 자리수 따로 구하기
ten= (number%100)//10
one= (number%100)%10

print("백의 자리:",hundred) #각 자리수 도출(프린트)
print("십의 자리:",ten)
print("일의 자리:",one)

new= (one*100)+(ten*10)+hundred #거꾸로 조합하여 수 만들기
print("거꾸로 만든 수:",new) #거꾸로 수 출력하기
