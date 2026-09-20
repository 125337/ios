// FUN_00436a3c @ 00436a3c

void FUN_00436a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  if ((DAT_028ca9a0 & 1) == 0) {
    FUN_00439e64();
    if ((uVar1 & 1) != 0) {
      uVar3 = local_30;
      _WCRefineWrapIsRestrictedForwardCandidate();
      if ((uVar3 & 1) != 0) {
        local_18 = 0;
        goto LAB_00436b4c;
      }
    }
    uVar4 = local_20;
    (*DAT_028ca988)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
  else {
    uVar4 = local_20;
    (*DAT_028ca988)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
LAB_00436b4c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

