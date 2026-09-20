// FUN_0001505c @ 0001505c

void FUN_0001505c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
               *(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

