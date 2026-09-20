// FUN_01974b10 @ 01974b10

bool FUN_01974b10(ushort param_1)

{
  bool bVar1;
  
  if ((((param_1 < 0x41) || (bVar1 = true, 0x5a < param_1)) &&
      ((param_1 < 0x61 || (bVar1 = true, 0x7a < param_1)))) &&
     ((bVar1 = true, param_1 != 0x5f && (bVar1 = true, param_1 != 0x24)))) {
    bVar1 = param_1 == 0x40;
  }
  return bVar1;
}

