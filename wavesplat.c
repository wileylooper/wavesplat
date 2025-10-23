#include <stdint.h>

struct waveSplatState64 {
  uint64_t a;
  uint64_t b;
};

struct waveSplatState32 {
  uint32_t a;
  uint32_t b;
};

struct waveSplatState16 {
  uint16_t a;
  uint16_t b;
};

uint32_t waveSplat64Low32(struct waveSplatState64 *s) {
  s->a += 111111111111111;
  s->b += s->a + (s->b >> 8);
  return s->b;
}

uint16_t waveSplat32Low16(struct waveSplatState32 *s) {
  s->a += 1111111;
  s->b += s->a + (s->b >> 4);
  return s->b;
}

uint8_t waveSplat16Low8(struct waveSplatState16 *s) {
  s->a += 1111;
  s->b += s->a + (s->b >> 2);
  return s->b;
}
