// FUN_01e1c0a0 @ 01e1c0a0

void FUN_01e1c0a0(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

