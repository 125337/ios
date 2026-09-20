// FUN_0159e768 @ 0159e768

void FUN_0159e768(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(byte *)(param_1 + 0x30) & 1,
               *(undefined8 *)(param_1 + 0x20));
  }
  return;
}

