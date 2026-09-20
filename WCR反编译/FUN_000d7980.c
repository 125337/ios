// FUN_000d7980 @ 000d7980

void FUN_000d7980(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8368)(param_1,param_2);
  uVar2 = local_18;
  FUN_000e739c();
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    FUN_000f44c8();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_BaseMsgContentViewController;
    local_28 = uVar2;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar2 & 1) == 0) {
      FUN_000d7bb8();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar2 = local_28;
    pcVar3 = &cf_BaseMsgContentViewController;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
    if ((uVar2 & 1) != 0) {
      FUN_000e6f78(local_28);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

