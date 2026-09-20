// FUN_0113b9f8 @ 0113b9f8

uint FUN_0113b9f8(uint param_1,uint param_2)

{
  uint local_c;
  
  param_2 = param_2 & 0x1f;
  local_c = param_1;
  if (param_2 != 0) {
    local_c = param_1 << (ulong)param_2 | param_1 >> (ulong)(0x20 - param_2 & 0x1f);
  }
  return local_c;
}

