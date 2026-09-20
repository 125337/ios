// FUN_0100b76c @ 0100b76c

void FUN_0100b76c(long param_1,long param_2)

{
  if ((param_2 < 1) || (param_2 <= *(long *)(param_1 + 0x28) * 0x100000)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
    }
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),&cf__Y__eu);
  }
  return;
}

