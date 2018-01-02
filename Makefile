all: build run

.PHONY: build
build:
	go build .

.PHONY: run
run: run
	./cpp-in-go
