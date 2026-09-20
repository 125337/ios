// FUN_003b874c @ 003b874c

void FUN_003b874c(long param_1)

{
  FUN_003b87ac(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  return;
}

