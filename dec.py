import io
from sys import argv
CYCPERUS = 50
CNTMAX = 4
with open(argv[1], "rb") as f:
    laststamp = 0
    stamp = 0
    lastregvals = [0] * CNTMAX
    regvals = [0] * CNTMAX
    while c:=f.read(1):
        val = int.from_bytes(c, 'little')
        CNT = val>>4
        ID = val&0xf
        print("")
        print("ID %d, wordcount=%d and " %(ID, CNT), end="")
        lens = []
        for i in range(CNT//2):
            val = int.from_bytes(f.read(1), 'little')
            lens.append(val & 0xf)
            lens.append(val >> 4)
        print("Bytelengths of words:",lens)
        stamp = laststamp + int.from_bytes(f.read(lens[0]),'little')
        laststamp = stamp
        print(" Timer = %d: %dus" %(stamp, stamp // CYCPERUS))
        i = 0
        for dlen in lens[1:]:
            regvals[i] = lastregvals[i] ^ int.from_bytes(f.read(dlen), 'little') 
            lastregvals[i] = regvals[i]
            print(" X%d = %08x" %(12+i, regvals[i]))
            i += 1 
    
            
            
