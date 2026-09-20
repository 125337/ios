// FUN_015ab424 @ 015ab424

void FUN_015ab424(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(byte *)(param_1 + 0x30) & 1,
               *(undefined8 *)(param_1 + 0x20));
  }
  return;
}

