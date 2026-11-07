def main():
    liste = [4,6,23,75,12345,8,44,12]
    print(maxValue(liste))
    print(max(liste))
def maxValue(list1):
    maxNumber = list1[0]
    for i in range(len(list1)):
        if list1[i] > maxNumber:
            maxNumber = list1[i]
    return maxNumber

main()




def main():
    str1 = "ardayureklia"
    print(str1.count("a"))
    print(sayar(str1,"a"))

def sayar(text: str, sub: str):
    if not sub or not text:
        return 0
    
    count = 0
    i = 0
    n = len(text)
    m = len(sub)
    
    while i <= n - m:
        # i'den başlayan sub uzunluğundaki parçayı alıp kıyaslıyoruz
        if text[i : i + m] == sub:
            count += 1
            i += m  # Eşleşme bulundu, sub uzunluğu kadar ileri atla
        else:
            i += 1  # Eşleşme yok, 1 karakter ilerle
            
    return count



main()

def main():
    st = "reww"
    print(isQwerty(st))


def isQwerty(str1):
    list1 = list(str1.upper())
    yes = 0
    for i in range(len(list1)):
        if list1[i] in "QWERTYUIOP":
            yes +=1
    if yes == len(list1):
        return True
    else:
        return False

main()

def main():
    nmb = int(input())
    print(getN(nmb))
def getN(num):
    sonuc = 1
    if num == 0:
        return 1
    elif num < 0:
        return 0
    else:
        for i in range(1,num+1):     
            sonuc *=i
        return sonuc
main()

def main():
    print(option1(10))
    print(option2(10))
def option1(balance):
    total = 0
    for i in range(balance):
        total+=100
    return total
def option2(balance):
    total = 1
    denge = 1
    for i in range(balance-1):
        denge *=2
        total += denge
    return total
main()

def main():
    firstName = input("First Name: ")
    lastName = input("Last Name : ")
    para = int(input("Neter current salary: "))
    print("Your new salary {0:,.2f}".format(paying(para)))
def paying(balance):
    if balance <40000:
        balance *=1.05
    else:
        artik = balance - 40000
        balance = 2000 + (artik*1.02)
    return balance+40000
main()


MONTHS = []
def fileExtract():
    infile = open("Months.txt",'r')
    global MONTHS
    for each in infile:
        MONTHS.append(each.strip())
def rMonths():
    rMonth = []
    for eachMonth in MONTHS:
        if 'r' in eachMonth:
            rMonth.append(eachMonth)
    return rMonth
def display(f):
    print(f)

fileExtract()
new = rMonths()
display(new)



COLORS = []
def colorful():
    global COLORS
    infile = open("Colors.txt",'r')
    for eachColor in infile:
        COLORS.append(eachColor.strip())
def letter(str1):
    for i in range(len(COLORS)):
        if str1 == COLORS[i][0]:
            print(COLORS[i])
def main():
    colorful()
    wow = input()
    letter(wow)

main()

def main():
    best1 = 123456.78
    best2 = 119876.55
    best3 = 107546.45
    months = 448
    ave = (best1+best2+best3)/3
    yrs = int(months/12)
    total = 0
    if yrs <= 5:
        perRate = yrs * 1.5
    elif yrs <= 10:
        perRate = (5 * 1.5) + ((yrs - 5) * 1.75)
    else:
        perRate = (5 * 1.5) + (5 * 1.75) + ((yrs - 10) * 2.0)
    p = min(perRate, 80.0)/100   
    total = p * ave
    print(f"{total:,.2f}")

main()
