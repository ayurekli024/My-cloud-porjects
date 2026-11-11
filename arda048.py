    
    
def main():
    infile = open("sinav_sonuclari.csv")
    list1 = list()
    list2 = list()
    for line in infile:
        list1.append(line.rstrip("\n"))
    total = 0
    for i in range(len(list1)):
        list1[i] = parser(list1[i])
    print(list1)
    for j in range(len(list1)):
        total +=list1[i][1]
    ave = total / len(list1)
    print(ave)
    print(medyan(list1))
def parser(line):
    tup1 = list(line.split(","))
    tup1[1] = (int(tup1[1])+int(tup1[2]))/2
    tup1.pop(2)
    return tup1
def medyan(liste):
    list2 = sorted(liste, key=lambda x:x[1])
    meydan = list2[len(list2)//2]
    return meydan

main()
