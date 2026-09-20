// FUN_0101966c @ 0101966c

void FUN_0101966c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  return;
}

