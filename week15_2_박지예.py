import hi #자기소개
import pandas as pd
import warnings #inplace=True함으로써 warning발생할 수 있는데 방지
warnings.filterwarnings('ignore') #얘도!
hi.me()

car1=pd.read_csv("car1.csv",index_col=0) #파일로부터 가져와서 판다스화
car2=pd.read_csv("car2.csv",index_col=0)
print("<자동차회사1>",car1,"\n<자동차회사2>",car2) #일단 출력
plus=pd.concat([car1,car2]) #냅다 병합한 판다스는 plus
print("<두 자동차회사의 병합>\n",plus)
plus['horse power'].fillna(plus['horse power'].mean(),inplace=True) #평균으로 horse power 대체
plus['weight'].fillna(plus['weight'].mean(),inplace=True) #평균으로 weight 대체
plus['efficiency'].fillna(plus['efficiency'].max(),inplace=True) #최대값으로 efficiency 대체
plus['horse power*efficiency']=plus['horse power']*plus['efficiency'] #새로운거 만들어(곱해서)
print("<최종 결과>\n",plus)
