# Kolekcija Zadataka za Piko Kompjuter (ETF)

Dobrodošli u moj GitHub repozitorijum koji sadrži **kolekciju zadataka i rešenja za Piko Kompjuter** sa Elektrotehničkog fakulteta u Beogradu.

Ovaj repozitorijum predstavlja ličnu arhivu svih zadataka koje sam rešavao tokom predmeta koji koriste *Piko računar* / *mikroprocesorski sistem*, zajedno sa objašnjenjima, komentarima i implementacijama u asembleru.

---

## 📁 Struktura Repozitorijuma

```
📦 pico-zadaci
├── 📂 zadaci
│   ├── zadatak1.asm
│   ├── zadatak2.asm
│   ├── ...
│   └── zadatakN.asm
├── 📂 resenja
│   ├── resenje1.asm
│   ├── resenje2.asm
│   └── ...
├── 📂 dokumentacija
│   ├── uputstvo.pdf
│   └── opis_arhitekture.txt
└── README.md
```

- **`zadaci/`** – originalni zadaci dati na vežbama ili kolokvijumima.
- **`resenja/`** – moja rešenja sa komentarima.
- **`dokumentacija/`** – dodatni materijali: arhitektura, instrukcioni skup, primeri.

---

## 🧠 Šta ovaj repo nudi

- Rešenja zadataka pisana u *ETF Piko asembler sintaksi*.
- Jasno komentarisani programi – svaki korak je objašnjen.
- Primeri korišćenja instrukcija: `ADD`, `SUB`, `BGT`, `IN`, `OUT`, `ORG`, indirektno adresiranje i drugo.
- Mini-tutorijali za ključne koncepte:
  - rad sa memorijom
  - petlje i uslovi
  - ulaz/izlaz
  - adresiranje `N + i` pomoću offseta

---

## 🚀 Kako koristiti

### 1. Klonirajte repozitorijum
```bash
git clone https://github.com/username/pico-zadaci.git
```

### 2. Učitajte `.asm` fajlove u Piko emulator ili ETF alat.

### 3. Pokrenite i debug-ujte po potrebi.

---

## 📘 Primer koda

```asm
N = 0
S = 100
L = 101
I = 102

ORG 8

IN L, 1
IN N, L
SUB L, L, 1

LOOP: ADD S, S, N+I
      ADD I, I, 1
BGT I, L, LOOP

STOP S
```

---

## 🎯 Cilj Projekta
Cilj mi je da sakupim sve zadatke sa vežbi, kolokvijuma i priprema na jednom mestu, da budu od koristi i drugim studentima koji se prvi put susreću sa Piko arhitekturom.

---

## 📬 Kontakt
Ako želiš da doprineseš repozitorijumu ili imaš neko pitanje, slobodno me kontaktiraj preko GitHuba!

---

**Hvala što koristiš ovaj repozitorijum!** 🎉
