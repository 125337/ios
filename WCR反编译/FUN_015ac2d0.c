// FUN_015ac2d0 @ 015ac2d0

void FUN_015ac2d0(long param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = (cfstringStruct *)0x0;
  if ((param_2 & 1) == 0) {
    pcVar1 = &cf_S1Y_;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 & 1,pcVar1);
  return;
}

