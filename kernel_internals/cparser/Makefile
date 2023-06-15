all: src/acsl/TestACSL

typecheck: build/acsl-interpreter
	./build/acsl-interpreter

src/acsl/TestACSL: yabnfc.cf
	mkdir -p src/acsl/
	cd src/acsl/ && (bnfc -m --cpp ../../yabnfc.cf -l -p acsl; cd ../../)
	cd src/acsl/ && (make; cd ../../)

.PHONY: all typecheck interpret
