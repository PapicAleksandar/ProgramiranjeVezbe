class Knjiga:
    def __init__(self, isbn,naslov,autor,zanr,biblioteka):
            self.isbn=isbn
            self.naslov=naslov
            self.autor=autor
            self.zanr=zanr
            self.biblioteka=biblioteka
    def NovaKnjiga(self):
        self.isbn= isbn
        print(self.isbnO)
if __name__="__main__":
    while True:
        isbn = input("Unesite isbn")
        kn = knjiga(isbn )
        kn.NovaKnjiga()