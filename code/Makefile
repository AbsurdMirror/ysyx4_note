test_printf_win: ./test_printf.c
	if not exist build md build
	gcc ./test_printf.c -o ./build/test_printf.exe

test_printf_linux: ./test_printf.c
	mkdir -p build
	gcc ./test_printf.c -o ./build/test_printf

clean: 
	rm -rf build