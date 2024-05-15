### how to run

```bash
bash scripts/build.sh
mkdir run-dir
cd run-dir/
cp ../video-classify-check.tar.gz .
tar -xzvf video-classify-check.tar.gz .
export LD_LIBRARY_PATH="${PWD}:${LD_LIBRARY_PATH}"
java -jar video-classify-check.jar
```
