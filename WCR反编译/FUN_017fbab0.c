// FUN_017fbab0 @ 017fbab0

void FUN_017fbab0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  return;
}

