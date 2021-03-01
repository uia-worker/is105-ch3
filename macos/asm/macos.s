.section __DATA,__data
# __DATA er segment, __data er seksjon (ref Mach-O format)
.section __TEXT,__text
# __TEXT er segment, __text er seksjon (fef Mach-0 format)
# din kode
.globl _main
_main:
  int3
  ret
