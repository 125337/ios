// FUN_015ac7c0 @ 015ac7c0

void FUN_015ac7c0(long param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = (cfstringStruct *)0x0;
  if ((param_2 & 1) == 0) {
    pcVar1 = &cf__SN_lS1Y_;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,pcVar1);
  return;
}

