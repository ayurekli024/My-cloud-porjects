infile = open("Numbers.txt",'r')
list1 = []
for eachLine in infile:
    list1.append(eachLine)

infile.close()
list1 = [element.strip() for element in list1]
print(list1)

outfile = open("Numbers.txt",'a')
outfile.writelines("Something, i\n think this line delet\nes everything\n in file. Let's see.")
outfile.close()


ardafile = open("Numbers.txt")
list2 = []
for oneyla in ardafile:
    list2.append(oneyla)

ardafile.close()
print(list2)