// FUN_015ac520 @ 015ac520

void FUN_015ac520(long param_1,byte param_2)

{
  cfstringStruct *local_48;
  
  if ((param_2 & 1) == 0) {
    local_48 = &cf_S1Y_;
  }
  else {
    local_48 = (cfstringStruct *)0x0;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      local_48 = &cf_N_S1Y__S;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 & 1,local_48);
  return;
}

