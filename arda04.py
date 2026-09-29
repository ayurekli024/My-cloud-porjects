regions = [
    ("İç Anadolu", 12.8),
    ("Marmara", 24.9),
    ("Ege", 10.5),
    ("Akdeniz", 10.7)
]
print("{0:<15s}{1:^15s}{2:>17s}".format("Bölge Adı","|","Nüfus(Milyon)"))
print("{0:<15s}{1:^15s}{2:>17.2f}".format(str(regions[0][0]),"|",regions[0][1]))
print("{0:<15s}{1:^15s}{2:>17.2f}".format(str(regions[1][0]),"|",regions[1][1]))
print("{0:<15s}{1:^15s}{2:>17.2f}".format(str(regions[2][0]),"|",regions[2][1]))
print("{0:<15s}{1:^15s}{2:>17.2f}".format(str(regions[3][0]),"|",regions[3][1]))
