// FUN_001414b0 @ 001414b0

void FUN_001414b0(undefined8 param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  undefined1 auStack_58 [48];
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = DAT_028c8738;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _memcpy(auStack_58,param_3,0x30);
  (*pcVar1)(param_1,param_2,auStack_58);
  FUN_00148f28(local_18);
  return;
}

