// FUN_006f2884 @ 006f2884

void FUN_006f2884(long param_1)

{
  cfstringStruct *local_40;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    local_40 = *(cfstringStruct **)(param_1 + 0x28);
    if (local_40 == (cfstringStruct *)0x0) {
      local_40 = &cf_U_O_WYX4lpS_Q1Y_;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),local_40);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
              (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

