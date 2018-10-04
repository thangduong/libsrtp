cmake_minimum_required(VERSION 2.8)
project(libsrtp)

include_directories(crypto/include include)
add_definitions(-DHAVE_CONFIG_H=1)

file(COPY config_cmake.h DESTINATION crypto/include)
file(REMOVE crypto/include/config.h)
file(RENAME crypto/include/config_cmake.h crypto/include/config.h)

add_library(libsrtp STATIC 
		srtp/srtp.c
		srtp/ekt.c
		crypto/cipher/cipher.c
		crypto/cipher/null_cipher.c
		crypto/cipher/aes_icm.c
		crypto/cipher/aes.c
		crypto/hash/null_auth.c
		crypto/hash/auth.c
		crypto/hash/hmac.c
		crypto/hash/sha1.c
		crypto/math/datatypes.c
		crypto/math/stat.c
		crypto/kernel/crypto_kernel.c
		crypto/kernel/alloc.c
		crypto/kernel/key.c
		crypto/kernel/err.c
		crypto/replay/rdb.c
		crypto/replay/rdbx.c
		crypto/replay/ut_sim.c
	)


#install(TARGETS test DESTINATION lib)
#install(FILES test.h DESTINATION include)
