VER="2.1.0"

all: build

build:
	@zip -r kf2-auto-kick-$(VER).zip *
	@zip -d kf2-auto-kick-$(VER).zip makefile

clean:
	@rm -f kf2-auto-kick-$(VER).zip

.PHONY: build
