## chscite Skånings rapportklass
##
## Copyright (C) 2012 by Simon Sigurdhsson <sigurdhsson@gmail.com>
## 
## This work may be distributed and/or modified under the
## conditions of the LaTeX Project Public License, either version 1.3
## of this license or (at your option) any later version.
## The latest version of this license is in
##   http://www.latex-project.org/lppl.txt
## and version 1.3 or later is part of all distributions of LaTeX
## version 2005/12/01 or later.
## 
## This work has the LPPL maintenance status `maintained'.
## 
## The Current Maintainer of this work is Simon Sigurdhsson.
## 
## This work consists of the file skrapport.tex and Makefile and the 
## derived files skrapport.cls, skrapport-colortheme-default.sty,
## skrapport-colortheme-unscathed.sty, skrapport-colortheme-violet.sty
## and skrapport-colortheme-cruelwater.sty.
.PHONY: all clean distclean
all: skrapport.pdf
clean:
	rm -f *.cls *.sty
distclean: clean

%.pdf:
	pdflatex $*.tex
	makeglossaries $*
	pdflatex $*.tex
	makeglossaries $*
	pdflatex $*.tex

%.cls: $*.pdf

%.sty: skrapport.cls
