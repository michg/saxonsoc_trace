import io
from sys import argv

REGCNT = 2
CYCPERUS = 50

with open(argv[1], "rb") as f:
    laststamp = 0
    stamp = 0
    lastregvals = [0] * REGCNT
    regvals = [0] * REGCNT
    while c:=f.read(1):
        typeval = int.from_bytes(c, 'little')
        len = (typeval&0xf) + 1
        if(typeval&0x80):
            stamp = laststamp + int.from_bytes(f.read(len),'little')
            laststamp = stamp
            print("@%d: %dus" %(stamp, stamp // CYCPERUS))
            i = 0
        else:
            regvals[i] = lastregvals[i] ^ int.from_bytes(f.read(len), 'little') 
            lastregvals[i] = regvals[i]
            print(" X%d = %08x" %(12+i, regvals[i]))
            i += 1
            
            
