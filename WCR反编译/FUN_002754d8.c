// FUN_002754d8 @ 002754d8

void FUN_002754d8(long param_1)

{
  long lVar1;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    (**(code **)(lVar1 + 0x10))(lVar1,*(long *)(param_1 + 0x28) + -1);
  }
  return;
}

