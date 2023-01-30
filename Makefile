all:
	g++ main.cpp Pessoa/pessoa.cpp  Aluno/aluno.cpp DataHorario/datahorario.cpp  Utility/utility.cpp  Voo/voo.cpp 
clean:
	rm -f a.out Pessoa/pessoa.h.gch Aluno/aluno.h.gch DataHorario/datahorario.h.gch Utility/utility.h.gch Voo/voo.h.gch
