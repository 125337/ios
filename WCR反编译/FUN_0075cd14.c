// FUN_0075cd14 @ 0075cd14

void FUN_0075cd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *local_b0;
  uint local_84;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = &cf_wcr_special_record_original_setTitle_forState_;
  local_30 = param_4;
  _NSSelectorFromString();
  local_38 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1),
     (uVar2 & 1) == 0)) {
    pcVar1 = &cf_wcr_special_original_setTitle_forState_;
    _NSSelectorFromString();
    local_38 = pcVar1;
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_18;
  local_40 = pcVar1;
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_84 = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    FUN_00760f58();
    local_84 = (uint)uVar2;
  }
  local_41 = (byte)local_84 & 1;
  if ((((DAT_028cc898 & 1) == 0) && (local_30 == 0)) && ((local_84 & 1) != 0)) {
    uVar2 = local_18;
    FUN_0076191c(local_18,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (uVar2 != 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_b0 = &cf___;
      }
      else {
        local_b0 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_b0);
      if ((uVar2 & 1) == 0) {
        _objc_storeStrong(&local_40,local_50);
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  DAT_028cc898 = 1;
  if ((local_38 == (cfstringStruct *)0x0) ||
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_38),
     (uVar2 & 1) == 0)) {
    local_60 = local_18;
    uVar2 = local_18;
    _object_getClass();
    _class_getSuperclass();
    local_58 = uVar2;
    _objc_msgSendSuper(&local_60,PTR_s_setTitle_forState__026caab8,local_40,local_30);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,local_38,local_40,local_30);
  }
  DAT_028cc898 = 0;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

