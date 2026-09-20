// FUN_00085798 @ 00085798

void FUN_00085798(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0008a138();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
  }
  else {
    pcVar2 = &cf_getRealUserName_;
    _NSSelectorFromString();
    uVar1 = local_20;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_performSelector_withObject__026ca7c0,local_40,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (uVar1 != 0) {
          _objc_storeStrong(uVar1,&local_28,local_48);
        }
      }
      _objc_storeStrong(&local_48,0);
    }
    uVar1 = local_28;
    FUN_00071d98();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  local_38 = 1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

