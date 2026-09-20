// FUN_005bc778 @ 005bc778

void FUN_005bc778(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_b0;
  ulong local_80;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf__title);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_b0 = 0;
      }
      else {
        local_b0 = local_48;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_b0;
      local_24 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_80 = 0;
      }
      else {
        local_80 = local_40[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_80;
      local_24 = 1;
      _objc_storeStrong(local_40,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

