#!/usr/bin/env bash

export LD_LIBRARY_PATH="/home/poisk/kafka-converter:${LD_LIBRARY_PATH}"

if [ -n ${JAVA_HOME} ] ; then
  JAVA=${JAVA_HOME}/bin/java
else
  JAVA=/usr/bin/java
fi

${JAVA} -cp video-kafka-converter.jar -Xmx14g -Dlogback.configurationFile=scripts/converter-logback.xml -Djava.library.path=./ ru.mail.Main config
