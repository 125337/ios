// FUN_01974bbc @ 01974bbc

bool FUN_01974bbc(ushort param_1)

{
  bool bVar1;
  
  if ((((param_1 < 0x41) || (bVar1 = true, 0x5a < param_1)) &&
      ((param_1 < 0x61 || (bVar1 = true, 0x7a < param_1)))) &&
     (((param_1 < 0x30 || (bVar1 = true, 0x39 < param_1)) && (bVar1 = true, param_1 != 0x5f)))) {
    bVar1 = param_1 == 0x24;
  }
  return bVar1;
}

