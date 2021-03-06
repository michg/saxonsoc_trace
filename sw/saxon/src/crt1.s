global main
global getlock
global unlock
global uart_write

csrr x10, mhartid
bne x10, x0, slave
li x2, 0x10a06000
jal x1, getlock
la x12, uart_write
csrw msampletabdat, x12
li x12, 0x20001
csrw msampletabcfg, x12
nop
la x12, main
csrw msampletabdat, x12
li x12, 0x10001
csrw msampletabcfg, x12
csrr x12, mhartid
csrwi msample, 1
jal x1, main
jal x1, unlock
mloop:
j mloop
slave:
j slave
li x11, 0x1000
addi x10, x10, -1
mul x10, x10, x11
li x2, 0x10a08000
add x2, x2, x10
jal x1, getlock
csrr x12, mhartid
jal x1, main
jal x1, unlock
sloop:
j sloop


getlock:
li x10,1
la x11, UARTLOCK
loop:
amoswap.w.aq x10, x10, (x11)
bne x10, x0, loop
jalr x0,ra,0 

unlock:
la x10, UARTLOCK
sw x0, 0(x10)
jalr x0, ra, 0 
UARTLOCK:
 dd 0 