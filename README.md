# Modelo-de-Seguidor-de-Linha

Usando uma CNN para Classificar se tem linha na imagem ou não, usei a as bases de treino a baixo em uma massa de dados unicas e outra base com dados que onde não tem linha

---
![](https://raw.githubusercontent.com/juanengml/Modelo-de-Seguidor-de-Linha-/master/Screenshot_2020-01-03%20Google%20Colaboratory.png)

Arquivos | Descrição 
---------| -------
 ![centro](centro.zip)     | ( LINHA NO MEIO     )
 ![esquerda](equerda.zip)  | ( LINHA NA ESQUERDA )
 ![direita](direita.zip)   | ( LINHA NA DIREITA  )
 imagens negativas | ( IMAGENS DIFERENTES DE LINHA )
 
--- 
Para conseguir essa base de dados 'negativas' ou aleatorias usei o seguinte comando 

```python

from google_images_download import google_images_download

response = google_images_download.googleimagesdownload()

arguments = {"keywords":"gato,porco,morcego,random,arara","limit":100,"print_urls":False}
paths = response.download(arguments)
print(paths)
```

```bash

mkdir not_line
mv downloads/arara/* not_line/
mv downloads/porco/* not_line
mv downloads/morcego/* not_line/
mv downloads/random/* not_line/


```



