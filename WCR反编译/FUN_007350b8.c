// FUN_007350b8 @ 007350b8

void FUN_007350b8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    FUN_00735314();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if ((uVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768)
       , (uVar1 & 1) == 0)) {
      local_18 = 0;
      local_30 = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_getStringForCurLanguage__0269f768,local_20);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
         local_18 = local_40, uVar1 == 0)) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

