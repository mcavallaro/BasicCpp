
all: Lecture1.pdf Lecture2.pdf
 
%.pdf : %.md
	pandoc $^ -N -s -S -H placeins.tex -o    $@
 
Beamer1.pdf: Lecture1.md
	pandoc Lecture1.md  -s -S  -t beamer --slide-level 2 -o Beamer1.pdf

Beamer2.pdf: Lecture2.md
	pandoc Lecture2.md -s -S  -t beamer --slide-level 2 -o Beamer2.pdf

clean: 
	rm -rf *.pdf


install:
	mv *.pdf ..
