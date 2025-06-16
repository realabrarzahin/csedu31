.equ LED, 0xff200000

.global _start
_start:
	mov r1, #2
	mov r2, #6
	bl  .add
	b   .exit
	
.add:
	ldr r0, =LED
	add r1, r1, r2
	str r1, [r0]
	bx  lr
	
.exit:
	

