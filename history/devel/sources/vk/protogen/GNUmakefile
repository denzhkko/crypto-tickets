# Этот Makefile генерируется в каталоге исходных файлов для обеспечения комфортной работы в 
# различных средах разработки таких как vi, kdevelop, eclipse

ROOT=/home/d.nedoluzhko/devel/source/trunk-clone
SUB=projects/protogen
DIR=/home/d.nedoluzhko/devel/build/trunk-clone-rel/projects/protogen
PRJ=_trunk-clone_projects_protogen_protogen

# Чтобы вывод было более читабельным уберем информацию о переходах в каталоги
ifndef VERBOSE
.SILENT:
endif

# Несколько целей укажем явным образом, для наглядности

all:
	@${MAKE} -C ${DIR} all

ptest:
	@${MAKE} -C ${DIR} ptest${PRJ} NUM_JOBS=$(tj) SKIP_TESTS=$(skip) TEST_INFO=$(test_info)

install: all
	@echo "== Installing scope {${SUB}} products..."
	@${ROOT}/build/tool-farm send -S ${ROOT} -zk -t "dir{0}:${SUB}"

clean:
	@${MAKE} -C ${DIR} clean

help:
	@${MAKE} -C ${DIR} help

# обработку остальных целей просто перенаправим
%:
	@${MAKE} -C ${DIR} $@
