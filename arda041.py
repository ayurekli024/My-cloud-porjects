settingsDict = {}
def starting():
    print("KarOS Başlatılıyor...")
    delay(5)

def lockScreen():
    print("KarOS'a hoş geldiniz!")
    print("Kilidi açmak için boşluk tuşuna basın.")
    while lock != " ":
        lock = input()

def homeScreen():
    print("1= Hesap Makinesi")
    print("2= KarNotes")
    print("3= Şehir Bulucu")
    print("4= KarStore")
    print("5= Ayarlar")
    print("6= Diğer Uygulamalar")
    print("7=   <--")
    print("8=   :::")
    print("9=   -->")
    sonuc = girdi()
    if sonuc == 1:
        calculator()
    elif sonuc == 2:
        #karnotes()
    elif sonuc == 3:
        #cityfind()
    elif sonuc == 4:
        #karstore()
    elif sonuc == 5:
        #settings()
    elif sonuc == 6:
        #apps()
    else:
        homeScreen()
def girdi():
    intGirdi = int(input())
    if intGirdi == 7:
        homeScreen()
    elif intGirdi == 8:
        #quickMenu()
    elif intGirdi == 9:
        homescreen()
    else:
        return intGirdi
def quickMenu():
    print("1= Kilitle")
    sonuc = girdi()
    if sonuc == 1:
        lockScreen()
def calculator():
    print("+ Toplama")
    print("- Çıkarma")
    print("* Multiplication")
    print("/ Division")
    print("% Mod Alma")