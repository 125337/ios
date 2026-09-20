// FUN_008cdd5c @ 008cdd5c

void FUN_008cdd5c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028ce288)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  pcVar2 = &cf_VoiceMessageCellView;
  local_30 = uVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  uVar1 = local_18;
  if ((uVar3 & 1) == 0) {
    pcVar2 = &cf_AppFileMessageCellViewV2;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
    uVar3 = local_18;
    if ((uVar1 & 1) == 0) {
      pcVar2 = &cf_AppFileMessageCellView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
      if ((uVar3 & 1) == 0) goto LAB_008cdf40;
    }
    uVar1 = local_18;
    FUN_008d7858(local_18,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  else {
    FUN_008d7398(local_18,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
LAB_008cdf40:
  uVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

