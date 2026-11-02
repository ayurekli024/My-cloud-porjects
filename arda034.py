balance = 10000
month = 0
while balance > 100:
    balance = (1.003* balance) -600
    month +=1

print(month,balance)

carbon = 1
year = 0
while carbon >= 0.5:
    year +=1
    carbon = carbon - (carbon*0.00012)

print(year)

year = 2014
china = 1.37
india = 1.26
chinaRate = 0.0051
indiaRate = 0.0135
while china >= india:
    year +=1
    china = china +(china*chinaRate)
    india = india +(india*indiaRate)
print(year)


temp1 = 212
temp2 = 70
k = .079
min = 0
while temp1 >= 150:
    temp1 = temp1 - (k*(temp1-temp2))
    min +=1
print(min)


