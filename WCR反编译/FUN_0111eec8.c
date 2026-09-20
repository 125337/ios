// FUN_0111eec8 @ 0111eec8

void FUN_0111eec8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  return;
}

