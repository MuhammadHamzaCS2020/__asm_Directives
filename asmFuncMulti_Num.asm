    ; Muhammad Hamza
	; 1602028
include Irvine32.inc
;.586
;.model flat,C

asmMain PROTO C, Array1: PTR DWORD,
                    Num: DWORD,
			  ARRAYSIZE: DWORD


.code
asmMain proc C uses ecx esi edi, 
                 Array1: PTR DWORD,       ; Array offset 
                    Num: DWORD,           ; Number that mult with Every Index of Array 
			  ARRAYSIZE: DWORD            ; Array SIZE
			  	 cld								
					mov esi, Array1		  ; Mov Array in esi		
					mov edi,Array1		  ; Mov Array in edi				 
					mov ecx,ARRAYSIZE	  ; Mov Array SIZE in ECX for LOOP 					 
					abc: lodsd			  ;  The Use of LODSD 			 
					imul eax,Num		  ; Multiply every index with Num			
					stosd				    			
					loop abc              ; Loop 
  ret                                     ; Return 
asmMain endp

end