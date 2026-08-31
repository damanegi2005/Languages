print("전공: 사이버보안") #전공 학번 이름 출력하기
print("학번: 2467013")
print("이름: 박지예")

import random #랜덤 모듈 가져오기
print("동전을 던져 앞면 혹은 뒷면을 맞히는 게임을 합니다.\n동전을 던졌습니다.")
coin=random.randint(1,2) #1이나 2중에 값을 갖도록 하기

guess=int(input("앞면(1)일까요 뒷면(2)일까요 맞혀보세요: ")) #내 추측 입력하기

if guess<1 or guess>2: #범위 밖의 값은 잘못된 입력
    print("잘못된 입력입니다.\n게임을 종료합니다")
elif guess==coin: #추측이 맞았을 경우
  print("맞혔습니다. \n잘했습니다. \n게임을 종료합니다.")
else: #추측이 틀렸을 경우
  print("틀렸습니다. \n게임을 종료합니다.")
