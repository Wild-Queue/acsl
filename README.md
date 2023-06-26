# ACSL

## Full bnfc grammar

Located in the file full_bnfc_parser.cf

This grammar combines the rules of partial grammars. Presented as an alternative way of parsing.

To build:

```sh
make build-full-bnfc
```

To run:

```sh
make run-full-bnfc
```

To clean:

```sh
make clean-full-bnfc
```

## Partial bnfc grammar

Located in the file partial_bnfc_parser.cf

This grammar contains a subset of the full grammar files. This grammar contains rules for parsing code written in C.

To build:

```sh
make build-partial-bnfc
```

To run:

```sh
make run-partial-bnfc
```

To clean:

```sh
make clean-partial-bnfc
```


Located in the file partial_bnfc_acsl_parser.cf

This grammar contains a subset of the full grammar files. This grammar contains rules for parsing code written in ACSL.

To build:

```sh
make build-partial-bnfc-acsl
```

To run:

```sh
make run-partial-bnfc-acsl
```

To clean:

```sh
make clean-partial-bnfc-acsl
```

## References

The grammar is inspired by the frama-c open repository available at:  
https://git.frama-c.com/pub/frama-c 

In particular, the grammar files were used: 

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/cparser.mly

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/logic_parser.mly
