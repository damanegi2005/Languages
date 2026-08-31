import matplotlib.pyplot as plt #모듈 가져오기
import numpy as np
import me #자기소개 모듈
me.hi() 
x=[x for x in range(0,20)] #x범위 설정
a=np.linspace(0,10,20) #넘파이의 메소드
b=np.logspace(0,10,20)
plt.plot(x,a,label="linspace",color="red",marker="o",linestyle="solid")#그래프생성
plt.plot(x,b,label="logspace",color="blue",marker="o",linestyle="solid")
plt.title("linspace/logspace") #제목넣기
plt.legend()#범례 설정
plt.show()#show해야 보임
