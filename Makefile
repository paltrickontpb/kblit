compile:
	g++ kblit.cpp -o kblit
	@echo "Compiled Succesfully!"
	@echo "To install, type \"sudo make install\" in the terminal"

install:
	mv kblit /bin/kblit
	chmod +x /bin/kblit
	@echo "Installation Complete"
	@echo "Restart Terminal to start using kblit!"
