# acsl



To build:

```sh
mkdir -p src/acsl/
cd src/acsl/
bnfc -m --cpp ../../bnfc_parser.cf -l -p acsl
make
cd .. && cd .. 
```

To run:

```sh
cd src/acsl/
./Testbnfc_parser
```


## References

The grammar is inspired by the frama-c open repository available at:  
https://git.frama-c.com/pub/frama-c 

In particular, the grammar files were used: 

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/cparser.mly

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/logic_parser.mly
