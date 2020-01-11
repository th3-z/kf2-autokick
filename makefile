VER="2.1.0"

all: build

build:
	@zip -r kf2-autokick-$(VER).zip *
	@zip -d kf2-autokick-$(VER).zip makefile

clean:
	@rm -f kf2-autokick-$(VER).zip

.PHONY: build
