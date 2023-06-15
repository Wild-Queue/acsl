# aorai and kernel_internals

These folders contain fragments of the grammar together with corresponding source ocaml files.

## kernel_internals

Inside this folder, the grammar files are contained in the folders cparser and logic_parser. Files outside these two folders are auxiliary.

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