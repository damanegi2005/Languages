import matplotlib.pyplot as plt #모듈 가져오기
import numpy as np
import me #자기소개 모듈
me.hi()

guassx1=5+6*np.random.randn(500) #가우스x1, y1 입력
guassy1=100+20*np.random.randn(500)
guassx2=50+6*np.random.randn(500)#넘파이의 메소드 중  randn(정규분포) 사용
guassy2=25+5*np.random.randn(500)
guassx3=90+10*np.random.randn(500)
guassy3=guassx3+np.random.randn(500) #표준정규분포는 그냥 np.random.randn

plt.scatter(guassx1,guassy1,label="x:(mu:5,sigma:6), y:(mu:100,sigma:20)",color="green") #그래프 3개
plt.scatter(guassx2,guassy2,label="x:(mu:50,sigma:6), y:(mu:25,sigma:5)",color="red")
plt.scatter(guassx3,guassy3,label="x:(mu:90,sigma:10), y:x+normal dist",color="blue")
plt.legend() #범례 출력
plt.show() 
