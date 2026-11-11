infile1 = open("kurs_a.txt",'r')
infile2 = open("kurs_b.txt",'r')
set1 = {line.rstrip("\n") for line in infile1}
set2 = {line.rstrip("\n") for line in infile2}
infile1.close()
infile2.close()
onfile = open("ortak.txt",'w')
list1 = list(set1)
list2 = list(set2)
set3 = set(list1 + list2)
list3 = [x for x in list1 if x in list2]
list4 = [x for x in list1 if x not in list2]
list5 = [x for x in list2 if x not in list1]
onfile.write("\n".join(list3))
onfile.close()
infile = open("sadece_kurs_a.txt",'w')
infile.write("\n".join(list4))
infile.close()
openfile = open("tum_ogrenciler.txt",'w')
openfile.write("\n".join(set3))
openfile.close()
