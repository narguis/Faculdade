import pandas as pd
dataset = pd.read_csv('Churn_Modelling.csv')

dataset.head(3)

X = dataset.iloc[:, 3:13].values
y = dataset.iloc[:, 13].values

from sklearn.preprocessing import LabelEncoder, OneHotEncoder
labelenconder_X_1 = LabelEncoder()
X[:, 1] = labelenconder_X_1.fit_transform(X[:, 1])
labelenconder_X_2 = LabelEncoder()
X[:, 2] = labelenconder_X_2.fit_transform(X[:, 2])

from sklearn.compose import make_column_transformer
onehotencoder= make_column_transformer((OneHotEncoder(categories='auto', sparse=False), [1]), remainder="passthrough")
X= onehotencoder.fit_transform(X)
X = X[:, 1:]

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2,random_state = 0)

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.transform(X_test)

from keras.models import Sequential
from keras.layers import Dense
classifier = Sequential()


