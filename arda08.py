revenue = 98456
costs = 45000
profit = revenue - costs
print(profit)

costPerShare = 25625
numberOfShares = 400
amount = costPerShare*numberOfShares
print(amount)

price = 19.95
discountPercent = 30
markdown = discountPercent/100*price
price = price-markdown
price = round(price,2)
print(price)

fixedCosts = 5000
pricePerUnit = 8
costPerUnit = 6
breakEvenPoint = fixedCosts / (pricePerUnit-costPerUnit)
print(breakEvenPoint)

balance = 100
balance = balance+ balance/20
balance = balance+ balance/20
balance = balance+ balance/20
print(round(balance,2))

balance2 = 100
balance2 = balance2+ balance2/20+100
balance2 = balance2+ balance2/20+100
balance2 = balance2+ balance2/20
print(round(balance2,2))

balance3 = 100
balance3 = balance3*1.05**10
print(round(balance3,2))

purchasePrice = 10
sellingPrice = 15
percentProfit = (100*(sellingPrice-purchasePrice))/purchasePrice
print(percentProfit)