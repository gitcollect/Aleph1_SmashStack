#Aleph1_SmashStack
Repository of programs (both code and executable) shown in the paper "Smashing the stack for fun and profit" by Aleph1

##Note on compilation
Every executable in the repository was compiled with ```gcc``` with the following options:
- ```-O0```
- ```-m32```
- ```-march=i386```
- ```-ggdb```
- ```-mpreferred-stack-boundary=2```
- ```-z execstack```
- ```-fno-stack-protector```

and sometimes, when it is needed, in order to show in ```gdb``` the calls at library functions, it is added the option
- ```-static```
