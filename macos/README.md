# Ekspempler i programmeringsspråket C
Husk at direkte kompilering, uten å gi noen alternativer (på engelsk options), vil resultere i en eksekverbar fil (Mach-O på macOS). Dette utføres i Terminal Versjon 2.9.4 (421.1.1) på Darwin Kernel Version 18.5.0: Mon Mar 11 20:40:32 PDT 2019; root:xnu-4903.251.3~3/RELEASE_X86_64 
```
$ gcc main00.c
main00.c:1:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
main() {}
^
1 warning generated.
$ ls
a.out main00.c
$ file a.out 
a.out: Mach-O 64-bit executable x86_64
```

* main00.c - en minimal versjon med kun en temporær main funksjon 
* main01.c - en litt mindre minimal versjon av en tom main funksjon
* main02.c - legger inn en printf (se Printf format string) i main funksjon
...

#Diverse lenker
* [Mach Object Files](http://www.cilinder.be/docs/next/NeXTStep/3.3/nd/DevTools/14_MachO/MachO.htmld/index.html)
* [Printf format string](https://en.wikipedia.org/wiki/Printf_format_string)

