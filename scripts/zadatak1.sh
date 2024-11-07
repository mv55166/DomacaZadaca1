#!/bin/bash

# Provjeravamo je li korisnik unio "suspend" ili "hibernate" kao argument
if [ "$1" == "suspend" ]; then
    echo "Računalo će se suspendirati za 1 sat..."
    sleep 1h
    systemctl suspend
elif [ "$1" == "hibernate" ]; then
    echo "Računalo će hibernirati za 1 sat..."
    sleep 1h
    systemctl hibernate
else
    echo "Korištenje: $0 [suspend | hibernate]"
    exit 1
fi


