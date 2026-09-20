// FUN_0150c26c @ 0150c26c

uint FUN_0150c26c(byte *param_1)

{
  return (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[2] << 8 |
         (uint)param_1[3];
}

