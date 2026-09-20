// FUN_01edbf44 @ 01edbf44

undefined8 FUN_01edbf44(long param_1)

{
  if (1 < param_1 - 0x3e9U) {
    if (param_1 == 0x3eb) {
      return 0x402c000000000000;
    }
    if (param_1 != 0x3ec) {
      if (param_1 - 0x3f0U < 2) {
        return 0x4010000000000000;
      }
      if (param_1 == 0x3f4) {
        return 0x4028000000000000;
      }
      if (param_1 - 0x3f5U < 2) {
        return 0x4024000000000000;
      }
      if (1 < param_1 - 0x3f9U) {
        if (param_1 - 0x3fbU < 2) {
          return 0x4010000000000000;
        }
        if (3 < param_1 - 0x3feU) {
          return 0x3ff0000000000000;
        }
      }
    }
  }
  return 0;
}

