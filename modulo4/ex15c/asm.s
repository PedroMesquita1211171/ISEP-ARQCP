.section .text
.global activate_invert_bits

activate_invert_bits:

	call activate_bits
	
	not %eax				# invert bits 
	
	ret
