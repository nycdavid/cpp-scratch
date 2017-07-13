image:
	docker build \
	-t cppgd \
	--no-cache \
	.
compile:
	docker run \
	-v $(shell pwd):/app \
	--rm \
	cppgd:latest \
	/bin/bash -c "g++ -std=c++14 -o /app/runProg regex.cc && /app/runProg"
test:
	docker run \
	-v $(shell pwd)/tests:/app/tests \
	-v $(shell pwd)/src:/app/src \
	--rm \
	cppgd:latest \
	/bin/bash -c "g++ -std=c++11 -o /test_bin/some_test /app/tests/*_test.cc /app/src/*.* && /test_bin/some_test"
