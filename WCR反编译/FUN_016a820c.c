// FUN_016a820c @ 016a820c

bool FUN_016a820c(ushort param_1)

{
  bool bVar1;
  
  if ((param_1 < 0x4e00) || (bVar1 = true, 0x9fff < param_1)) {
    bVar1 = 0x33ff < param_1 && param_1 < 0x4dc0;
  }
  return bVar1;
}

