// FUN_0076191c @ 0076191c

void FUN_0076191c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_84;
  ulong local_78;
  ulong local_60;
  undefined4 local_58;
  byte local_52;
  byte local_51;
  ulong local_50;
  byte local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = _WCRefineTextStyleVoicePlaceholder;
  FUN_0075ede8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_41 = 0;
  if (uVar2 == 0) {
    local_78 = local_20;
    FUN_00761578();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
  }
  else {
    local_78 = local_28;
  }
  local_41 = uVar2 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_50 = uVar1;
  FUN_00761ccc();
  uVar1 = local_50;
  local_51 = (byte)uVar2;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_84 = 0;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_84 = 0;
    if (uVar1 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_50);
      local_84 = (uint)uVar1;
    }
  }
  uVar1 = local_28;
  local_52 = (byte)local_84 & 1;
  if (((local_51 & 1) == 0) && ((local_84 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_58 = 1;
  }
  else {
    uVar1 = local_20;
    _objc_getAssociatedObject(local_20,DAT_026f4600);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) || ((local_51 & 1) != 0)) {
      _objc_storeStrong(&local_60,local_38);
      _objc_setAssociatedObject(local_20,DAT_026f4600,local_60,3);
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_60;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    else {
      uVar1 = _WCRefineTextStyleVoicePlaceholder;
      FUN_00762810(_WCRefineTextStyleVoicePlaceholder,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar1;
    }
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

