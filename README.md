# ACSL

## Full bnfc grammar

Located in the file full_bnfc_parser.cf

This grammar contains all the rules found in the frama-c repository

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

This grammar contains a subset of the full grammar files. This grammar is designed to get rid of conflicts that prevent proper parsing of the files.

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


## References

The grammar is inspired by the frama-c open repository available at:  
https://git.frama-c.com/pub/frama-c 

In particular, the grammar files were used: 

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/cparser.mly

https://git.frama-c.com/pub/frama-c/-/blob/master/src/kernel_internals/parsing/logic_parser.mly
