def liste_ozeti(sayilar):
    tup01 = (min(sayilar), max(sayilar), sum(sayilar)/len(sayilar))

    return tup01

def main():
    sayi_listesi = [12,43,23,76,52]
    ozet = []
    ozet =liste_ozeti(sayi_listesi)
    kucuk = ozet[0]
    buyuk = ozet[1]
    orta = ozet[2]
    print(kucuk,buyuk,orta)

main()

