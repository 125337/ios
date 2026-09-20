// FUN_015b1544 @ 015b1544

void FUN_015b1544(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x29) & 1;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),bVar1 != 0);
  return;
}

