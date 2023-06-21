build-full-bnfc: full_bnfc_parser.cf
	mkdir -p src/acsl/
	cd src/acsl/ && (bnfc -m --cpp ../../full_bnfc_parser.cf -l -p acsl;  cd ../../)
	cd src/acsl/ && (make; cd ../../)

build-partial-bnfc: partial_bnfc_parser.cf
	mkdir -p src/partial_acsl/
	cd src/partial_acsl/ && (bnfc -m --cpp ../../partial_bnfc_parser.cf -l -p partial_acsl;  cd ../../)
	cd src/partial_acsl/ && (make;  cd ../../)

run-full-bnfc: src/acsl/Testfull_bnfc_parser
	./src/acsl/Testfull_bnfc_parser

run-partial-bnfc: src/partial_acsl/Testpartial_bnfc_parser
	./src/partial_acsl/Testpartial_bnfc_parser

clean-full-bnfc:
	cd src/acsl/ && (make clean; cd ../../)

clean-partial-bnfc:
	cd src/partial_acsl/ && (make clean; cd ../../)


clean-bak-full-bnfc:
	cd src/acsl/ && (rm -f *.bak; cd ../../)

clean-bak-partial-bnfc:
	cd src/partial_acsl/ && (rm -f *.bak; cd ../../)