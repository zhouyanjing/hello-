
KERNEL := /lib/modules/`uname -r`/build
obj-m := hello.o

all:
	make -C $(KERNEL) M=`pwd` modules
install:
	make -C $(KERNEL) M=`pwd` modules_install
clean:
	make -C $(KERNEL) M=`pwd` clean
	rm -rf *.*~
