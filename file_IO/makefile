src = $(wildcard *.c)  #hello.c sub.c div1.c add.c
obj = $(patsubst %.c,%,$(src))

ALL:$(obj)

$(obj):%:%.c
	gcc $< -o $@ -g

clean:
	-rm -rf $(obj) 