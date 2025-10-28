# Cifrario di Vigenère

Questo programma C implementa la cifratura e decifratura del cifrario di Vigenère tramite riga di comando.

-----

### 1\. Compilazione
Clona il repository e compila il codice:

```bash
gcc main.c -o vigenere
```

### 2\. Esecuzione

Il programma accetta i seguenti argomenti da riga di comando:

```bash
./vigenere [OPZIONE] [PAROLA] [CHIAVE_OPZIONALE]
```

**Descrizione degli argomenti:**

  * **`[OPZIONE]`**: Specifica l'operazione da eseguire.

      * `-e`: Cifra la parola fornita.
      * `-d`: Decifra la parola fornita.

  * **`[PAROLA]`**: La parola da cifrare o decifrare.

      * **Nota:** Il programma è progettato per gestire solo lettere minuscole dell'alfabeto inglese (`a-z`). L'uso di altri caratteri potrebbe causare comportamenti imprevisti.

  * **`[CHIAVE_OPZIONALE]`**: La chiave di cifratura da utilizzare.

      * Se omessa, verrà utilizzata la chiave predefinita `"chiave"` (definita come `KEY` nel codice).

### Esempi

**Cifrare una parola con una chiave specificata:**

```bash
./vigenere -e "parola" "segreto"
# Output: wcrgvm
```

**Decifrare una parola con una chiave specificata:**

```bash
./vigenere -d "wcrgvm" "segreto"
# Output: parola
```

**Cifrare una parola usando la chiave predefinita:**

```bash
./vigenere -e "esempio"
# Output: cqiswmo
# (Usa la chiave "chiave")
```

**Decifrare una parola usando la chiave predefinita:**

```bash
./vigenere -d "cqiswmo"
# Output: esempio
# (Usa la chiave "chiave")
```
