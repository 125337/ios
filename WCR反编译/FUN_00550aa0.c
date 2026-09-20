// FUN_00550aa0 @ 00550aa0

void FUN_00550aa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    lVar1 = local_28;
    _NSSelectorFromString();
    uVar2 = local_20;
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,lVar1);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
      local_38 = 1;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
         local_18 = local_48, uVar2 == 0)) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

