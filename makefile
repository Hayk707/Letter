all:
	mkdir letter/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r letter
run:
	cd letter && ./letter


