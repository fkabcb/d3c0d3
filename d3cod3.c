#include <stdint.h>
#include <string.h>

const size_t blocksize = sizeof(uint64_t);

void d3cod3_blocks(uint64_t* inbuf, uint64_t* outbuf, uint32_t numblocks) {
 uint64_t key;
 char* key_as_string = "G0P0l1c3";
 memcpy(&key, key_as_string, blocksize);
 for(uint32_t i=0; i<numblocks; i++) outbuf[i] = inbuf[i] ^ key;
}
