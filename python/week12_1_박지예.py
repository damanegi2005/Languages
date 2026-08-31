import me #자기소개 모듈
me.hi()
import numpy as np #넘파이 np로 사용

height =np.array([1.83, 1.76, 1.69, 1.86, 1.77, 1.73]) #키  넘파이로
weight =np.array([86.0, 74.0, 59.0, 95.0, 80.0, 68.0]) #몸무게 넘파이로
print("<키>\n",height,"\n<몸무게>\n",weight)
bmi= weight/height**2 #bmi 넘파이로 계싼
new=np.array(list(height)+list(weight)+list(bmi)) #다 나열된 넘파이 지정
print("\n<결과>\n",new)
new1=new.reshape(3,6) #행열 설정하기
new2=new1.transpose() #transpose 사용하여 보기좋게
print("\n<키, 체중, bmi 순서 배열>\n",new2)

