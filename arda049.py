def parser(line):
    tup1 = line.strip(",")
    return tup1

infile = open("sinav_sonuclari.csv")
list1 = list()
list2 = list()
for line in infile:
    list1.append(line.rstrip("\n"))

for i in range(len(list1)):
    list1[i] = parser(list1[i])
print(list1)


