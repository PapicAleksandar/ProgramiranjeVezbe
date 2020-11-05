mesec = input("Input the name of Month: ")

if mesec == "Februar":
	print("28/29 dana")
elif mesec in ("April", "Jun", "Septembar", "Novembar"):
	print("30 dana")
elif mesec in ("Januar", "Mart", "Maj", "Jul", "Avgust", "Oktobar", "Decembar"):
	print("31 dan")
else:
	print("Greska") 