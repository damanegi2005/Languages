print("전공: 사이버보안") #전공, 학번, 성명 출력하기
print("학번: 2467013")
print("성명: 박지예")

print("두 점의 좌표(x1,y1), (x2,y2)를 입력하세요")

x1=int(input("x1: "))
y1=int(input("y1: "))
x2=int(input("x2: "))
y2=int(input("y2: "))

print("<두 점 (",x1,",",y1,"),(",x2,",",y2,") 사이의 거리>")

distancedus= ((x2-x1)**2+(y2-y1)**2)**0.5

print("연산자 **를 사용한 결과:", distancedus)

import math
one= math.pow((x2-x1),2)
two= math.pow((y2-y1),2)
three=one+two
four=math.sqrt(three)

print("math 모듈을 사용한 결과:", four)
