ticket = 12.00
age = int(input("How old are you?: "))
member = input("Are you joined our club? (Yes/No): ").strip().capitalize()

# 1. Yaş kategorisine göre taban fiyat
if age < 12:
    ticket = 6.00
elif age >= 65:
    ticket = 8.00

# 2. Kulüp üyeliği indirimi
if member == "Yes":
    ticket -= 2.00

# ya da .format() ile:
print("Final Ticket Price: ${0:.2f}".format(ticket))