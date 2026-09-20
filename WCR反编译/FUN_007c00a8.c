// FUN_007c00a8 @ 007c00a8

void FUN_007c00a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028cce20 & 1) == 0) {
    (*DAT_028ccd70)(local_18,local_20,local_28);
    local_38 = 1;
    goto LAB_007c0200;
  }
  lVar1 = local_18;
  FUN_007c9fd4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  if (lVar1 == 0) {
    (*DAT_028ccd70)(local_18,local_20,local_28);
LAB_007c01e8:
    local_38 = 0;
  }
  else {
    uVar2 = local_28;
    FUN_007ca53c(local_28,lVar1);
    if ((uVar2 & 1) == 0) {
      (*DAT_028ccd70)(local_18,local_20,local_40);
      goto LAB_007c01e8;
    }
    (*DAT_028ccd70)(local_18,local_20,local_28);
    local_38 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_007c0200:
  _objc_storeStrong(&local_28,0);
  return;
}

