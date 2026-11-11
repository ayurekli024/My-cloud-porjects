infile = open("Numbers.txt",'r')
list1 = [int(text.rstrip("\n")) for text in infile]
print(len(list1))
print(max(list1))
print(min(list1))
print(sum(list1))
print(sum(list1)/len(list1))
print(list1[-1])
infile.close()

ayfile = open("Months.txt",'r')
list2 = [month.strip("\n") for month in ayfile]
ayfile.close()
list3 = list()
for i in range(len(list2)):
    if 'r' in list2[i]:
        list3.append(list2[i])
print(list3)
ayfile = open("Months.txt",'w')
ayfile.writelines("\n".join(list3))
ayfile.close()




num1,num2 = 10,14
i = num1
while i < num2:
    presfile = open("USPres.txt")
    print(presfile.readlines()[i])
    presfile.close()
    i+=1