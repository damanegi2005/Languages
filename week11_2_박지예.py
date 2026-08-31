import me, string #자기소개 모듈
me.hi()

f=open('Time is.txt','r')#파일오픈
print(f.read())
f.close()#닫아야함

def process(w): #단어리스트 출력위한 함수
    output=''
    for i in w:#for문 사용하여 계속 단어 추가
        output+=i
    return output#단어들 반환
def upper(): #대문자 수 구하기 위한 함수
    uppercount=0
    for cha in words:
        for i in cha:#중첩 for문 사용
            if i in string.ascii_uppercase:#string모듈 사용
                uppercount+=1
    return uppercount
def lower(): #소문자 수 구하기 위한 함수
    lowercount=0
    for cha in words:#중첩for사용
        for i in cha:
            if i in string.ascii_lowercase:#string모듈사용
                lowercount+=1
    return lowercount
def digit(): #숫자 수 구하기 위한 함수
    digitcount=0
    for cha in words:#중첩for문사용
        for i in cha:
            if i in string.digits:
                digitcount+=1#숫자일때마다 수 늘어남
    return digitcount
def all():#총문자수 구하는 함수 정의
    a=0
    for i in words:
        a+=len(i)#길이만큼 더하기
    return a #반환까지만.

words=set()
f=open('Time is.txt','r') #이미 앞에서 열었는데 왜 다시 해야할
for a in f:
    a_words=a.split() #split은 단어별로 자르는것
    for word in a_words:
        words.add(process(word)) #process함수 불러보기

print("<words list>\n",sorted(words)) #sorted내장함수 사용하여 사전식 나열
print("<단어 리스트에 포함된 문자 수>\n*총 단어 수: ",len(words))
print("*대문자 수: ",upper(),"\n*소문자 수: ",lower(),"\n*숫자 수: ",digit(),"\n*기타: ",all()-upper()-lower()-digit())#기타문자는 빼서
f.close() #잘 닫아야함.
