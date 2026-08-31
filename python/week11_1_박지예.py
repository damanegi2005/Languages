import me #자기소개 모듈
me.hi()

s=input("문자열 입력: ") #문자열 입력받기

mainlist=list(s) #리스트화
result1=''
for i in s: #왜 범위가 list일땐 안되고 문자열일땐 되는거지
    result1 += mainlist.pop()
print("<리스트 pop이용>\n",result1)

mainlist=list(s) #리스트를 다시 해야 돌아감
mainlist.reverse() #mainlist자체가 reverse됨!! 대입하는거아님
print("<리스트 reverse 후 join 이용>\n",''.join(mainlist)) #join메소드 사용

result3='' #초기화
for i in s: #for문 사용하여 하나씩 추가
    result3=i+result3
print("<문자를 하나씩 앞에 붙이기>\n",result3)

print("<문자열 슬라이싱 이용>\n",s[::-1]) #간격을 -1로 하여 간단히



