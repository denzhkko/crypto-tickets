#!/usr/bin/env bash

set -e

./gradlew build jar
./gradlew copyLibs
./gradlew copyFiles

rm -rf dist/
mkdir dist

cd build/lib
for f in ./*-*; do
    mv -n "$f" "${f%%-*}.so"
done
cd -

mv build/libs/video-classify-check-1.0-SNAPSHOT.jar dist/video-classify-check.jar
cp -R build/lib/* dist/
cp -R scripts/ dist/
cp -R build/files/* dist/
cp -R videoImportDocs/ dist/

mv dist/scripts/converter-logback.xml dist/scripts/converter-logback.xml_both
cp dist/scripts/converter-logback_file.xml dist/scripts/converter-logback.xml

cd dist

tar czf video-classify-check.tar.gz ./*

mv video-classify-check.tar.gz ../video-classify-check.tar.gz

cd ..
