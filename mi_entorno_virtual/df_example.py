import pandas as pd
#pandas y la funcion DataFrame  
df = pd.DataFrame() 
df['color'] = ['Rojo', 'Verde', 'Azul', 'Blanco']
df['radios'] = [2,4,8,16]

print(df)# imprime el dataframe completo
print(df['color']) # imprime la columna color
print(df['radios']) # imprime la columna radios 
 
# otro ejemplo
d = pd.DataFrame() 
d['nombres'] = ['jose', 'luis', 'torres', 'bonilla']
d['numeros'] = [128,64,32,16]
d['msb'] = d['numeros']
d['lsb'] = [8, 4, 2, 1]

print(df)# imprime el dataframe completo
print(df.shape) 
