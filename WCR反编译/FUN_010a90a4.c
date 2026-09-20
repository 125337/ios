// FUN_010a90a4 @ 010a90a4

void FUN_010a90a4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  }
  return;
}

