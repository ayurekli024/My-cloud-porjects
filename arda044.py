def cost(num1):
    total = num1*.10 -.05
    return total
def main():
    num = int(input())
    print(f"{cost(num):,.2f}")
main()

def semesterGrade(grade):
    if grade >= 90:
        return "A"
    elif grade >= 80:
        return "B"
    elif grade >= 70:
        return "C"

def main():
    num = int(input())
    print(semesterGrade(num))

main()

def anagrams(str1,str2):
    str1.upper()
    str2.lower()
    list1 = [str1[x] for x in range(len(str1))]
    list2 = [str2[x] for x in range(len(str2))]
    check = 0
    list1.sort()
    list2.sort()
    if list1 == list2:
        return True
def main():
    word1 = input("Enter first word: ")
    word2 = input("Enter second word: ")
    note = anagrams(word1,word2)
    if note:
        print("They are anagrams.")

main()

def grades(list1):
    range = max(list1)-min(list1)
    ave = sum(list1)/len(list1)
    return range,ave

def main():
    liste = [78,76,98,99,89]
    num1 , num2 = grades(liste)
    print(num1,num2)

main()

pres = [("Lyndon", "Johnson"),("John", "Kennedy"),("Andrew", "Johnson")]
pres2 = sorted(pres)
pres3 = sorted(pres2, key=lambda x:x[1])
print(pres3)
NE = [("Maine", 30840, 1.329), ("Vermont", 9217, .626), 
("New Hampshire", 8953, 1.321), ("Massachusetts", 7800, 6.646), 
("Connecticut", 4842, 3.59), ("Rhode Island", 1044, 1.05)]
list1 = sorted(NE, key=lambda x: x[2]/x[1])
for i in range(len(list1)):
    print(list1[i][0])

numbers = [865, 1169, 1208, 1243,329]

