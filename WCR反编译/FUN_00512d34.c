// FUN_00512d34 @ 00512d34

void FUN_00512d34(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0xffffffff);
  }
  return;
}

