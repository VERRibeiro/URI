casos =  int(input())
while casos:
    palavra = input()
    num1 = int(palavra[2:4])
    num2 = int(palavra[5:8])
    num3 = int(palavra[11:13])
    casos = casos-1
    soma = num1 + num2 + num3;
    print(soma)
