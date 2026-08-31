import me_ #만든 모듈 가져오기
print(me_.me())

class Dog:#dog 클래스 만들기
    def __init__(self,name,age,weight): #생성자 정의
        self.name= name #받은 값을 변수에 넣기
        self.age= age
        self.weight= weight
        self.sound="" #일단sound에는 아무값이나 넣기
    def bark(self):#bark 짖는 메소드 만들기
        if self.weight>=20:# if elif 사용해서 다르게 짖도록 하기
            self.sound= "컹컹" 
        elif 10<=self.weight<20:
            self.sound= "멍멍"
        else:
            self.sound= "캥캥" #캥캥 짖기
        print("{}가 {} 짖습니다. {}살, {}kg입니다".format(self.name,self.sound,self.age,self.weight)) #bark 함수내에서 문장 출력
        

d1= Dog("바둑이",3,25) #바둑이 정의
d2= Dog("메리",7,12) #메리 정의
d3= Dog("순심이",1,5) #순심이 정의

d1.bark() #bark 메소드 
d2.bark()
d3.bark()


        

