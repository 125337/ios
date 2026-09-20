// FUN_015b1f6c @ 015b1f6c

void FUN_015b1f6c(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  return;
}

