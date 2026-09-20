// FUN_02202c04 @ 02202c04

void FUN_02202c04(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    _swift_retain(param_2 & 0x3fffffffffffffff);
  }
  else if (uVar1 == 2) {
    _swift_retain(param_1);
    _swift_retain(param_2 & 0x3fffffffffffffff);
  }
  return;
}

