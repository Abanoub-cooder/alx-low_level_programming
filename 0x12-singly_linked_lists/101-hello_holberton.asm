section .data
hello dp 'hello,holberton', 0Ah;message to print ,
with new line charater 
 extern    printf
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
format: db `Hello, Holberton\n`,
