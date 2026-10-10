user_input = input("Write a number: ").strip()

# 1. Doğrulama: Pozitif tam sayı mı, yoksa eksi ile başlayıp geri kalanı rakam olan negatif bir sayı mı?
if user_input.isdigit() or (user_input.startswith("-") and user_input[1:].isdigit()):
    num = int(user_input)

    # 2. Pozitif / Negatif / Sıfır Kontrolü
    if num == 0:
        sign = "Zero"
    elif num > 0:
        sign = "positive"
    else:
        sign = "negative"

    # 3. Çift / Tek Kontrolü
    if num == 0:
        print("0 is neither positive nor negative, and it is an even number.")
    else:
        parity = "even" if num % 2 == 0 else "odd"
        print(f"{num} is a {sign} {parity} number.")

else:
    print("Invalid input! Please enter an integer.")