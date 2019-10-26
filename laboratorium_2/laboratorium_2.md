## Laboratorium 2

1. Wyświetl na ekran 2 pierwsze wiersze pliku `program.c`.

```sh
head --lines 2 c_lang/program.c #skrypt bash
head -n 2 c_lang/c/program.c
head -2 c_lang/c/program.c
```

2. Wyświetl na ekran 4 ostatnie wiersze pliku program.c. (head, tail)
```sh
tail --lines 4 c_lang/c/program.c #skrypt bash
```

3. W pliku program.c znajdź wszystkie wiersze z wystąpieniem słowa „main”. (grep)
```sh
grep 'main' c_lang/c/program.c
```

4. Plikowi program.c nadaj następujące uprawnienia: właściciel – czytanie, pisanie, grupa – czytanie, pozostali użytkownicy: brak uprawnień. (chmod)
```sh
chmod u+rw program.c #nadanie użytkownikowi uprawnien do czytania i pisania
chmod g+r program.c #nadanie grupie uprawnien do czytania
chmod o-rwx program.c # brak uprawnień dla reszty użytkownikow
```

5. Będąc w katalogu temp przenieś katalog wazne-sprawy do katalogu praca.
```sh
mv dom/wazne-sprawy/ praca/  # przeniesienie katalogu dom/wazne-sprawy do /praca
```

6. Zarchiwizuj cały katalog temp. (zip i tar)
```sh
zip -r temp.zip temp #tworzenie archiwum folderu temp
```

7. Usuń katalog temp.
```sh
rm -rf  temp #usunięcie katalogu temp z calą zawartością 
```
8. Odtwórz z archiwum katalog temp. (unzip i tar)
```sh
unzip temp.zip
```

9. Posprzątaj na swoim koncie.