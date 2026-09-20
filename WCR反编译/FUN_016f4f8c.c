// FUN_016f4f8c @ 016f4f8c

void FUN_016f4f8c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(byte *)(param_1 + 0x28) & 1);
  }
  return;
}

