#include "../qemu_mode/qemuafl/qemuafl/api.h"
#include <stdio.h>

void afl_persistent_hook(struct x86_64_regs *regs, uint64_t guest_base,
                         uint8_t *input_buf, uint32_t input_buf_len) {
    afl_persistent_setenv("HTTP_COOKIE", (char *)input_buf);
}

int afl_persistent_hook_init(void) {
  return 1;
}

