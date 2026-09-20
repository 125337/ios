// FUN_00fca2e0 @ 00fca2e0

void FUN_00fca2e0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  return;
}

