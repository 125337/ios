// FUN_008985d0 @ 008985d0

void FUN_008985d0(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_008a28c0();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_0089ccc0();
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_0;
      goto LAB_008986b0;
    }
  }
  pcVar3 = local_20;
  (*DAT_028cdbf0)(local_20,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar3;
LAB_008986b0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

