all: Lecture3.pdf Lecture4.pdf

%.ps : %.dvi
	dvips -o $@ $<

%.pdf : %.ps
	ps2pdf $< $@

%.pdf : %.tex
	pdflatex $<
	pdflatex $<

%.pdf : %.fig
	fig2dev -L pdftex $< $@

install:
	mv Lecture3.pdf Lecture4.pdf ..

clean:
	-rm -f *~ *.out *.aux *.dvi *.ps *.pdf *.toc *.lof *.log *.lot *.flg *.bbl *.blg *.idx *.ind *.ilg *.snm *.nav *.fig.bak
