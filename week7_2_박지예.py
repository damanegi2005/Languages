import me_ #만든 모듈 가져오기
print(me_.me())

import math #math 모듈 사용하기

class Point: #point 클래스 정의하기
    def __init__(self,id,x,y): #생성자 정의
        self.id= id #id, x,y를 변수에 대입
        self.x=x 
        self.y=y
    def getX(self): #x를 반환하는 메소드 정의
        return self.x
    def getY(self): #y를 반환하는 메소드 정의
        return self.y
    def print_point(self): #(x,y) 출력하는 메소드 정의
        print("{}: ({},{})".format(self.id,self.x,self.y))

p1=Point("p1",int(input("p1의 x좌표: ")),int(input("p1의 y좌표: "))) #p1 객체 정의
p2=Point("p2",int(input("p2의 x좌표: ")),int(input("p2의 x좌표: "))) #p2 객체 정의


p1.print_point() #p1 관련3 메소드 출력
p2.print_point() #p2 관련 메소드 출력


print("p1, p2 사이의 거리:{0:.2f} ".format(math.sqrt((p1.getX() - p2.getX())**2+(p1.getY() - p2.getY())**2)))
#마지막 거리 출력하기

