from subprocess import run

run(["cmake", ".", "-B", "build", "-GNinja"])
run(["cmake", "--build", "build"])
run(["./build/src/exec"])