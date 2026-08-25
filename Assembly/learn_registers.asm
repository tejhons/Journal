
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

; add your code here
; use emulate, single step...to see what registers are doing after each line.
; remember 0x is to help the compiler recognize hex values
; decimal 30 and 0x30 are NOT the same.
mov ah, 30
mov bx, 0xffff
mov bh, 0x30

ret




