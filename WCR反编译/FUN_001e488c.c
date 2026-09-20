// FUN_001e488c @ 001e488c

byte FUN_001e488c(ulong param_1,long param_2)

{
  undefined1 uStack_d;
  
  uStack_d = 0;
  if ((((param_2 == 0xf) && (uStack_d = 0, (param_1 & 1) != 0)) &&
      (uStack_d = 0, (param_1 & 0x100) != 0)) && (uStack_d = 0, (param_1 & 0x10000) != 0)) {
    uStack_d = (byte)(param_1 >> 0x18);
  }
  return uStack_d & 1;
}

