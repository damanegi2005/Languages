import matplotlib.pyplot as plt #모듈 가져오기
import numpy as np
import me #자기소개 모듈
me.hi()

month=[7,8,9,10,11,12]
m_range=np.arange(len(month))#넘파이화하여 데이터 다루기 쉽게
acus=[370,382,458,580,690,854] #a,b 고객 수 
bcus=[456,492,508,599,670,754]

plt.bar(m_range+0.0,acus,width=0.3,color="blue",label="A company") #바그래프
plt.bar(m_range+0.3,bcus,width=0.3,color="red",label="B company")
plt.title("New customers") #제목 입력
plt.legend() #범례 가져와
plt.xticks(range(len(month)),month) 
plt.show() #안쓰면 안됨
