OUTDIR := build

all: $(OUTDIR)/case4

$(OUTDIR)/case4: case4.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	@rm -rf build
