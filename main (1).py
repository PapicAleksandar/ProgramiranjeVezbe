class Smestaj:
    def __init__(self, naziv, adresa, grad):
        self.naziv = naziv
        self.adresa = adresa
        self.grad = grad

    def __str__(self):
        return '(naziv: {self.naziv}, adresa: {self.adresa}, grad: {self.grad})'

    def unosSmestaja(self):
        self.naziv = input("Unesite naziv smestaja: ")
        self.adresa = input("Unesite adresu smestaja: ")
        self.grad = input("Unesite grad smestaja: ")

class Hotel(Smestaj):
    def __init__(self, zvezdice):
        Smestaj.__init__(self, n, n, n)
        self.zvezdice = zvezdice

    def unosHotela(self):
        self.unosSmestaja()
        self.zvezdice = input("Unesite broj zvezdica: ")

    def __str__(self):
        return '(naziv: {self.naziv}, adresa: {self.adresa}, grad: {self.grad}, zvezdice: {self.zvezdice})'

def prikazSvihHotela(h):
    print("Hoteli:")
    for h in hoteli:
        print(h.__str__())

def prikazSvihSmestaja(s):
    print("Smestaji: ")
    for s in smestaji:
        print(s.__str__())

if __name__ == "__main__":
    n = ""
    s = Smestaj(n, n, n)
    h = Hotel(s)
    smestaji = []
    hoteli = []

    while True:
        print("1. Kreirajate smestaj.")
        print("2. Kreirajate hotel.")
        print("3. Prikaz svih hotela.")
        print("4. Prikaz svih smestaja.")
        print("x - izlaz")
        izbor = input("Vas izbor: ")
        if izbor == '1':
            s.unosSmestaja()
            smestaji.append(s.__str__())
        elif izbor == '2':
            h.unosHotela()
            hoteli.append(h.__str__())
        elif izbor == '3':
            prikazSvihHotela(h)
        elif izbor == '4':
            prikazSvihSmestaja(s)
        elif izbor == 'x':
            break
        else:
            print("Greska!")