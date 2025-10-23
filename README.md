#### WaveSplat64Low32

WaveSplat64Low32 provides enhanced speed as an ideal alternative to 64-bit, non-parallel, small-period PRNGs that output 32-bit integers and suffice with minimal mixing to avoid LCG patterns.

It has a period of at least 2⁶⁴.

`a` must be seeded with `0` and `b` must be assigned a seed.

`waveSplat64Low32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports both a 64-bit, unsigned integral type for `uint64_t` and a 32-bit, unsigned integral type for `uint32_t`.

---

#### WaveSplat32Low16

WaveSplat32Low16 provides enhanced speed as an ideal alternative to 32-bit, non-parallel, small-period PRNGs that output 16-bit integers and suffice with minimal mixing to avoid LCG patterns.

It has a period of at least 2³².

`a` must be seeded with `0` and `b` must be assigned a seed.

`waveSplat32Low16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports both a 32-bit, unsigned integral type for `uint32_t` and a 16-bit, unsigned integral type for `uint16_t`.

---

#### WaveSplat16Low8

WaveSplat16Low8 provides enhanced speed as an ideal alternative to 16-bit, non-parallel, small-period PRNGs that output 8-bit integers and suffice with minimal mixing to avoid LCG patterns.

It has a period of at least 2¹⁶.

`a` must be seeded with `0` and `b` must be assigned a seed.

`waveSplat16Low8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports both a 16-bit, unsigned integral type for `uint16_t` and an 8-bit, unsigned integral type for `uint8_t`.
