import me # 자기소개 모듈 가져오기
me.hi()

list1=['A','B','C'] #list1, list2만들기
list2=[1,2]

print("<첫번째 리스트>\n",list1) #list들을 일단 출력
print("<두번째 리스트>\n",list2)

new_list=[]#일단 새 리스트 비워두기
for i in list1: #중첩 for문 사용하기
    for j in list2:
        x=i+str(j) #새로운 문자에 조합한 요소 넣기
        new_list.append(x) #append 사용하여 추가하기
print("<중첩 for문을 이용한 조합>\n",new_list)
    
another_list=[i+str(j) for i in list1 for j in list2] #리스트 컴프리핸션 사용하기
print("<List Comprehension을 이용한 조합>\n",another_list)

