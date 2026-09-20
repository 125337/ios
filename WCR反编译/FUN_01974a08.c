// FUN_01974a08 @ 01974a08

bool FUN_01974a08(ushort param_1)

{
  bool bVar1;
  
  if (((param_1 < 0x30) || (bVar1 = true, 0x39 < param_1)) &&
     ((param_1 < 0x61 || (bVar1 = true, 0x66 < param_1)))) {
    bVar1 = 0x40 < param_1 && param_1 < 0x47;
  }
  return bVar1;
}

