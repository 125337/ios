// FUN_002827bc @ 002827bc

void FUN_002827bc(long param_1)

{
  bool bVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    bVar1 = true;
    if (*(long *)(param_1 + 0x28) != 3) {
      bVar1 = *(long *)(param_1 + 0x28) == 4;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),bVar1);
  }
  return;
}

