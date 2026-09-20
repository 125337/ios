// FUN_02202c7c @ 02202c7c

void FUN_02202c7c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    _swift_release(param_2 & 0x3fffffffffffffff);
  }
  else if (uVar1 == 2) {
    _swift_release(param_1);
    _swift_release(param_2 & 0x3fffffffffffffff);
  }
  return;
}

