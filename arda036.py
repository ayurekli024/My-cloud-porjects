cobalt = 10.0
decrease = .12
for year in range(1, 6):
    cobalt -= cobalt * decrease
    print("year", year ,":{0:.2f}".format(cobalt))

number = input("Enter a telephone number: ")
i = 0
list1 = []
for element in number:
    if element == '-':
        list1 = number.split("-")
    i +=1
print(list1[0],list1[1],list1[2], sep="")

phrase = input("Enter a phrase ")
vowels = ('a','e','i','o','u')
vowel = 0
for ch in phrase:
    for vow in vowels:
        if ch == vow:
            vowel +=1
print(vowel)

x = 1
sum = 0.0
for x in range(1,101):
    sum = float(sum + 1/x)

print("{0:.5f}".format(sum))
word = input("Bir kelime girin: ").strip().lower()
is_alphabetical = True

for i in range(len(word) - 1):
    if word[i] > word[i + 1]:
        is_alphabetical = False
        break

if is_alphabetical:
    print(f"'{word}' harfleri alfabetik sırada.")
else:
    print(f"'{word}' harfleri alfabetik sırada DEĞİL.")

vowels = ('a','e','i','o','u')
word = input("Enter a word: ")
list1 = []
for i in range(len(word)):
    for vow in vowels:
        if word[i] == vow:
            list1.append(word[i])
print(list1)
if len(list1) == 5:
    print("yes")
else:
    print("no")


name = input("Enter name: ")
age = int(input("Enter age: "))
salary = float(input("Enter starting salary: "))

total_earnings = 0
current_salary = salary

for current_age in range(age, 66):
    total_earnings += current_salary
    current_salary *= 1.05  # Apply 5% raise for the following year

print(f"\n{name}'s total estimated earnings before retirement: ${total_earnings:,.2f}")

cash = 1000
investment = 1000
print("{0:<30}{1:>30}".format("Simple Interest","Compound Interest"))
for year in range(4):
    investment *= 1.05
    cash += 50
    print(year,"{0:<.2f}{1:>30}".format(investment,cash))

car = 20000
for year in range(4):
    car *=.85
    print(car)
