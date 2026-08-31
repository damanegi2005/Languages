import hi #자기소개
import pandas as pd #판다스 import
hi.me()

weather = pd.read_csv("weather.csv", index_col="일시",encoding='CP949')#파일로부터 값 가져와서 판다스화
print("<가장 더운 날>",weather[weather['평균기온']==weather['평균기온'].max()]) #max활용
print("\n<평균기온이 30도 이상인 날>\n",weather[weather['평균기온']>=30])
print("\n<평균기온이 30도 이상이고 평균 풍속이 4.0 이상인 날>")
print(weather[(weather['평균기온']>=30)&(weather['평균풍속']>=4.0)]) #두가지조건 만족시엔 저렇게 표현
