// FUN_00512c70 @ 00512c70

void FUN_00512c70(long param_1,int param_2)

{
  undefined4 local_3c;
  
  if ((uint)(param_2 * 0x15180) < *(uint *)(param_1 + 0x28)) {
    local_3c = *(int *)(param_1 + 0x28) + param_2 * -0x15180;
  }
  else {
    local_3c = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),local_3c,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}

