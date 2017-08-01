test:
	docker run \
	-it \
	-v $(shell pwd)/tests:/app/tests \
	-v $(shell pwd)/src:/app/src \
	-v $(shell pwd)/../vendor:/app/vendor \
	--rm \
	cppgd:latest \
	/bin/bash -c "g++ -std=c++14 -o /test_bin/some_test /app/tests/*_test.cc /app/src/*.* && /test_bin/some_test"
