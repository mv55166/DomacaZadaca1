#!/bin/bash

# Provjera da li je argument (vrijeme u minutama) zadan
if [ -z "$1" ]; then
    echo "Upotrijebite: $0 <broj minuta>"
    exit 1
fi

# Dohvati broj minuta iz prvog argumenta
MINUTES=$1

# Definiraj direktorij u kojem će se tražiti datoteke
DIRECTORY="/home/username"

# Pronađi datoteke promijenjene u zadnjih n minuta i ispiši ih
echo "Datoteke promijenjene u zadnjih $MINUTES minuta:"
find "$DIRECTORY" -type f -mmin -"$MINUTES"

# Komprimiraj datoteke u backup.tgz
find "$DIRECTORY" -type f -mmin -"$MINUTES" -print0 | tar -czvf backup.tgz --null -T -
echo "Kreirana je arhiva backup.tgz sa svim promijenjenim datotekama."
