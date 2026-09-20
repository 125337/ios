// FUN_01006098 @ 01006098

void FUN_01006098(long param_1)

{
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 0x20);
    }
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      local_48 = *(undefined8 *)(param_1 + 0x28);
    }
    else {
      local_48 = 0;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_38,local_48);
  }
  return;
}

