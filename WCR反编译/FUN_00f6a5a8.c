// FUN_00f6a5a8 @ 00f6a5a8

void FUN_00f6a5a8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
               *(byte *)(param_1 + 0x30) & 1);
  }
  return;
}

