// FUN_01e9a4d4 @ 01e9a4d4

void FUN_01e9a4d4(long param_1)

{
  undefined8 local_40;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    local_40 = *(long *)(param_1 + 0x20);
    if (local_40 == 0) {
      local_40 = *(long *)PTR____NSArray0___02578280;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_40);
  }
  return;
}

