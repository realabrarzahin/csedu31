.global _start

power:
	push {r7}
	sub  sp, sp, #16
	add  r7, sp, #0
	movs r3, #1
	str  r3, [r7, #12]
	mov  r3, #1
	str  r3, [r7, #8]
	str  r0, [r7, #4]
	str  r1, [r7, #0]
	ldr  r4, [r7, #12]
	b    loop
	
mulp:
	mul r4, r4, r0
	add r3, r3, #1
	
loop:
	cmp  r3, r1
	ble  mulp
	str  r4, [r7, #12]
	bx   lr
	

_start:
	push {r7, lr}
	sub  sp, sp, #20
	add  r7, sp, #0
	movs r3, #2
	str  r3, [r7, #16]
	movs r3, #5
	str  r3, [r7, #12]
	ldr  r0, [r7, #16]
	ldr  r1, [r7, #12]
	
	bl   power
	pop  {r7, lr}
