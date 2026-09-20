// FUN_0113b8f4 @ 0113b8f4

uint FUN_0113b8f4(uint param_1,uint param_2,byte param_3)

{
  int local_24;
  uint local_20;
  
  local_20 = 0;
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    local_20 = local_20 |
               (uint)(byte)((&DAT_0232c6e0)[local_24 + (param_1 & 3) * 4] ^
                           (char)param_1 * '\x11' ^ 0xa5U ^ param_3) << (ulong)(local_24 * 8 & 0x1f)
    ;
  }
  FUN_0113b9f8(param_2,(param_3 & 3) * 7 + param_1);
  return local_20 ^ param_2 ^ (param_1 + 1 + (uint)param_3) * -0x61c88647;
}

