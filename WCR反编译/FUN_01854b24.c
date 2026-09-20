// FUN_01854b24 @ 01854b24

void FUN_01854b24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_20 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
      }
      local_2c = (uint)(uVar2 != 0);
      _objc_storeStrong(&local_38,0);
      if (local_2c != 0) goto LAB_01854d84;
    }
    pcVar3 = &cf_getContactForSearchByName_;
    _NSSelectorFromString();
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar3);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_2c = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,pcVar3,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = uVar2;
    }
  }
LAB_01854d84:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

