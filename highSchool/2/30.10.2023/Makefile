SCRIPT=../../../exe-win
CPATH=
DIR=.

.PHONY: all
all: 
	@for f in $(shell ls ${DIR} | grep .cpp); do ${SCRIPT} $${f}; done

clean:
	rm -rf *.exe
	rm -rf *.o
	rm  -rf *.out