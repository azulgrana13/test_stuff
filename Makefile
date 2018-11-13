obj-m := lkm.o

PWD := $(shell pwd)
default:
	$(MAKE) -C $(KERNEL_SRC) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_SRC) SUBDIRS=$(PWD) clean
