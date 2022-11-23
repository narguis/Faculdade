import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

dados = pd.read_csv('c:\\Users\\AlunoTGN\\Downloads\\dados_anuncio.csv')

dados.head()

X = dados[['Age', 'EstimatedSalary']]
y = dados['Purchased']

#Para fazer a transformação dos dados para predição
media = X.mean(axis=0)
dp = X.std(axis=0)

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, random_state = 0)

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.fit_transform(X_test)

from sklearn.linear_model import LogisticRegression
classifier = LogisticRegression(random_state=0)
classifier.fit(X_train, y_train)

y_pred = classifier.predict(X_test)

from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)

#Calculara a precião do classificador
from sklearn import metrics
print('Precisão: ',metrics.accuracy_score(y_test, y_pred))
plt.show()

#Aplicando o classificador para dados desconhecidos
alguem = alguem = pd.DataFrame({'Age': 30,'EstimatedSalary': 170000},index=[0])
alguem = (alguem - media)/dp
print(alguem)
res = classifier.predict(alguem)
print(res)
