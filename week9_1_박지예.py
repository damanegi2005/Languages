import me #자기소개 모듈 가져오기
me.hi()

fruit_list=['banana','kiwi','apple','orange','melon'] #과일 리스트 생성
print(fruit_list)

def max(fruit_list): #최대길이 반환하는 함수 만들기
    max=0
    for s in fruit_list: #for문 사용하여 반복
        if len(s)>=max:
            max=len(s)
    return max #max변수 반환

def name(): #과일 출력하는 함수 만들기
    for i in fruit_list: #for문사용하여 반복
        if len(i)==max(fruit_list):
            print(i) 

print("과일명 최대길이:",max(fruit_list)) #글자수와 과일 출력하기
name()
