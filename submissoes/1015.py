x1 = float(input())
y1 = float(input())
x2 = float(input())
y2 = float(input())

distancia = (((x2 - x1) ** 2) + ((y2 - y1) ** 2)) ** 0.5
print('{:.4f}'.format(distancia))