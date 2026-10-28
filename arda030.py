def fiyat_hesapla(fiyat_listesi, kdv_orani=0.20, kargo_ucreti=35.0, indirim_kuponu=None, ucretsiz_kargo_baraji=500.0):
    if indirim_kuponu == "Bahar10":
        indirim = .10
    elif indirim_kuponu == "SUEP20":
        indirim = .20
    else:
        indirim = 0
    total = sum(fiyat_listesi)
    indirim_tutari= (total*indirim)
    total = total - indirim_tutari
    if total >= ucretsiz_kargo_baraji:
        kargo_ucreti = 0

    kdv_tutari = total*kdv_orani
    genel_toplam = total+kdv_tutari+kargo_ucreti
    tuple01 = (total,indirim_tutari,kargo_ucreti,kdv_tutari,genel_toplam)
    return tuple01

def main():
    fiyatlar = [23,432,54,12,67,98]
    sonuc = fiyat_hesapla(fiyat_listesi =fiyatlar,kargo_ucreti=0,indirim_kuponu="SUEP20")
    print("Ham Toplam: ", sonuc[0])
    print("İndirim Tutarı: ",sonuc[1])
    print("Kargo Tutarı: ",sonuc[2])
    print("KDV Tutarı: ",sonuc[3])
    print("Genel Toplam: ",sonuc[4])

main()