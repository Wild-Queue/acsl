# aorai and kernel_internals

These folders contain fragments of the grammar together with corresponding source ocaml files.

# main 

The main grammar folder 

To build:

```sh
mkdir -p main/src/acsl/
cd main/src/acsl/
bnfc -m --cpp ../../bnfc_parser.cf -l -p acsl
make
cd .. && cd .. && cd ..
```

To run:

```sh
cd main/src/acsl/
./Testcombined_parser
```