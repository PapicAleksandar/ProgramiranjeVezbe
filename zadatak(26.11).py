'''
filmovi =  {"1":"matrix"}

while 1:
    
    print("1 - Lista sbih filmova \n")
    print("2 - Unos novog filma \n")
    print("3 - Izmena starog filma \n")
    print("4 - Brisanje filma \n")


    x = input("Unesite jednu od opcija: ")
    if x == "1":
        for key in filmovi.keys():
         print(filmovi[key])
    elif x =="2":
        i = input("Unesite kod novog filma: ")
        filmovi[i]= input("Unesite ime novog filma: ")
    elif x =="3":
        i = input("Unesite kod filma koji zelite da izmenite: ")
        filmovi[i]= input("Unesite ime filma: ")
    elif x=="4":
        i = input("Unesite kod filma koji zelite da obrisete: ")
        filmovi.pop(i)
