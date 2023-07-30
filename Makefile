# Full ACSL C parser

build-full-parser: full_c_acsl_parser.cf
	mkdir -p src/c_acsl_parser/
	cd src/c_acsl_parser/ && (bnfc -m -d --haskell ../../full_c_acsl_parser.cf -p FullCAcsl;  cd ../../)
	cd src/c_acsl_parser/ && (make; cd ../../)

run-full-parser: src/c_acsl_parser/FullCAcsl/FullCAcslParser/Test
	./src/c_acsl_parser/FullCAcsl/FullCAcslParser/Test

clean-full-parser:
	cd src/c_acsl_parser/ && (make clean; cd ../../)

clean-bak-full-parser:
	cd src/c_acsl_parser/ && (rm -f *.bak; cd ../../)

# C without ACSL parser

build-c-parser: c_grammar.cf
	mkdir -p src/c_parser/
	cd src/c_parser/ && (bnfc -m -d --haskell ../../c_grammar.cf -p C;  cd ../../)
	cd src/c_parser/ && (make;  cd ../../)

run-c-parser: src/c_parser/C/CGrammar/Test
	./src/c_parser/C/CGrammar/Test

clean-c-parser:
	cd src/c_parser/ && (make clean; cd ../../)

clean-bak-c-parser:
	cd src/c_parser/ && (rm -f *.bak; cd ../../)

# ACSL without C parser

build-acsl-parser: acsl_grammar.cf
	mkdir -p src/acsl_parser/
	cd src/acsl_parser/ && (bnfc -m -d --haskell ../../acsl_grammar.cf -p Acsl;  cd ../../)
	cd src/acsl_parser/ && (make;  cd ../../)

run-acsl-parser: src/acsl_parser/Acsl/AcslGrammar/Test
	./src/acsl_parser/Acsl/AcslGrammar/Test

clean-acsl-parser:
	cd src/acsl_parser/ && (make clean; cd ../../)

clean-bak-acsl-parser:
	cd src/acsl_parser/ && (rm -f *.bak; cd ../../)

