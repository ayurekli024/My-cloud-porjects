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

num1 = int(input("Enter a Number: "))
num2 = int(input("Enter a Number: "))
num3 = int(input("Enter a Number: "))
maxNum = 0