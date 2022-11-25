nome = input()
salFixo = float(input())
bonus = float(input())

print('TOTAL = R$', '{:.2f}'.format(salFixo + (bonus * 15/100)))