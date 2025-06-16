.global _start
_start:
	mov r0, #0
	mov r1, #10
	mov r2, #1

.loop:
	cmp r1, r2
	bgt .geq
	beq .geq
	b   .exit

.geq:
	sub r1, r1, r2
	add r0, r0, #1
	b   .loop

.exit:
	
	
	
