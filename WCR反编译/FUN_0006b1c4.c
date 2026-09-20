// FUN_0006b1c4 @ 0006b1c4

void FUN_0006b1c4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 local_48;
  
  pcVar1 = DAT_028c7db8;
  uVar2 = param_2;
  FUN_00077bac();
  local_48 = param_1;
  if ((uVar2 & 1) != 0) {
    local_48 = 0;
  }
  (*pcVar1)(local_48,param_2,param_3);
  return;
}

