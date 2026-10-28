"""bill = int(input("Enter amount of bill: "))
tip = bill *15/100
if tip < 2.00:
    tip = 2.00
print("Tip is $",tip)

bagel = int(input("Enter number of bagels: "))
if bagel < 5:
    cost = bagel*0.75
else :
    cost = bagel*0.60
print("Cost is $", cost)
cost = 0
widget = int(input("Enter number of widgets: "))
if widget < 100:
    cost = widget*.25
else:
    cost = widget*.20
print("Cost is $", cost)


copies = int(input("Enter number of copies: "))
if copies <= 100:
    total = copies * .05
else:
    total = 5 + (copies-100)*.03
print("Cost is $",str(total))

ans = input("Who was the first Ronald McDonald? ")
ans = ans.upper()
if ans == 'WILLARD SCOTT':
    print("You are correct!")
else: 
    print("Nice try.")

hour = int(input("Enter number of hours you are working: "))
wage = float(input("Enter your wage by hour: "))
if hour <= 40:
    num1 = wage * hour
else: 
    num1 = 40*wage+ (hour-40)*(wage*1.5)
print(num1)

list1 = [0,0,0]
list1[0] = int(input("Enter first score: "))
list1[1] = int(input("Enter first score: "))
list1[2] = int(input("Enter first score: "))
list1.remove(min(list1))
print(sum(list1)/2)

vowels = ('a','e','i','o','u')
word = input("Enter word to translate: ")
word = word.lower()
if word.startswith(vowels):
    print(word+"way")
else:
    if 'a' in word:
        num2 = word.index('a')
        word2 = word[:num2]
        print(word[num2:]+word2+"ay")
    elif 'e' in word:
        num2 = word.index('e')
        word2 = word[:num2]
        print(word[num2:]+word2+"ay")
    elif 'i' in word:
        num2 = word.index('i')
        word2 = word[:num2]
        print(word[num2:]+word2+"ay")
    elif 'o' in word:
        num2 = word.index('o')
        word2 = word[:num2]
        print(word[num2:]+word2+"ay")
    elif 'u' in word:
        num2 = word.index('u')
        word2 = word[:num2]
        print(word[num2:]+word2+"ay")


apple = int(input("How many pounds apple you sell? "))
cash = int(input("Enter payment: "))
totalApple = apple*2.5
if cash < totalApple:
    print("You owe $"+str(totalApple-cash)+"more.")
else:
    print("Your change is $"+str(cash-totalApple))

balance = eval(input("Enter current balance: "))
withDrawal = eval(input("Enter amount of withdrawal: "))
if withDrawal > balance:
    print("Withdrawal denied.")
else:
    balance = balance-withDrawal
    if balance < 150:
        print("Balance below $150")
    print("The new balance is $"+str(balance))


letter = input("Enter a single uppercase letter: ")
if not len(letter) == 1 or not letter.isupper():
    print("You did not comply with the request.")"""

year = int(input("Enter a year: "))
leap = False
if year % 4 == 0:
    leap = True
    if year % 100 == 0:
        leap = False
        if year % 400 == 0:
            leap = True

if leap == True:
    print(year, "is a leap year.")
else:
    print(year, "is not a leap year.")


time = input("Enter a military time: ")
hour = int(time[:2])
minute = int(time[2:])
pm = False
if hour > 12:
    hour = hour- 12
    pm = True
if pm == True:
    print(hour,minute,"pm.")
else:
    print(hour,minute,"am.")

taxableIncome = int(input("Enter your wave: "))
if taxableIncome <= 20000:
    tax = .02*taxableIncome
elif taxableIncome <= 50000:
    tax = 400 + .025 * (taxableIncome-20000)
else:
    tax = 1150+ .035 * (taxableIncome-50000)
print(tax)

cloth1 = eval(input("Enter cost of first suit: "))
cloth2 = eval(input("Enter cost of second suit: "))
if cloth1 < cloth2:
    print((cloth1/2)+cloth2)
else:
    print(cloth1+(cloth2/2))