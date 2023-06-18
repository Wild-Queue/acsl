# ACSL

## Full bnfc grammar

Located in the file full_bnfc_parser.cf

This grammar contains all the rules found in the frama-c repository

To build:

```sh
mkdir -p src/acsl/
cd src/acsl/
bnfc -m --cpp ../../full_bnfc_parser.cf -l -p acsl
make
cd .. && cd .. 
```

To run:

```sh
cd src/acsl/
./Testfull_bnfc_parser
```

## Partial bnfc grammar

Located in the file partial_bnfc_parser.cf

This grammar contains a subset of the full grammar files. This grammar is designed to get rid of conflicts that prevent proper parsing of the files.

To build:

```sh
mkdir -p src/partian_acsl/
cd src/partian_acsl/
bnfc -m --cpp ../../partial_bnfc_parser.cf -l -p partian_acsl
make
cd .. && cd .. 
```

To run:

```sh
cd src/partian_acsl/
./Testpartial_bnfc_parser
```


## References

The grammar is inspired by the frama-c open repository available at:  
https://git.frama-c.com/pub/frama-c 

In particular, the grammar files were used: 

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/cparser.mly

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/logic_parser.mly
