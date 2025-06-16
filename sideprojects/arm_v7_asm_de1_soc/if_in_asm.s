.equ LED, 0xff200000

.global _start
_start:
	mov r1, #10
	mov r2, #10
	cmp r1, r2
	beq .equal
	b   .exit
	
.equal:
	ldr r0, =LED
	mov r1, #1
	str r1, [r0]

.exit:
	ldr r0, =LED
	mov r1, #0
	str r1, [r0]
	
