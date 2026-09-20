// _WCRNameplateUsernameForGroupingItemView @ 00355a84

void _WCRNameplateUsernameForGroupingItemView(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_58;
  bool local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
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
    _objc_getAssociatedObject(local_20,&DAT_028ca0e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar1 == 0)) {
      local_58 = local_20;
      FUN_00355cb8();
      _objc_retainAutoreleasedReturnValue();
      local_41 = local_58 == 0;
      local_38 = local_58;
      if (local_41) {
        local_58 = 0;
      }
      else {
        _objc_getAssociatedObject(local_58,&DAT_028ca0e1);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_58;
      }
      local_41 = !local_41;
      _objc_storeStrong(&local_30,local_58);
      if (local_41) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      _objc_storeStrong(&local_38,0);
    }
    uVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar1 == 0)) {
      local_18 = 0;
    }
    else {
      uVar3 = local_30;
      FUN_00355e04(uVar1);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

