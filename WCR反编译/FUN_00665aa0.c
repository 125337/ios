// FUN_00665aa0 @ 00665aa0

byte FUN_00665aa0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = &DAT_028cbc78;
    local_20 = 0;
    local_48 = uVar2;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e7e8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar2 = DAT_028cbc70;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbc70,PTR_s_containsObject__0269cbb8,local_48);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_gh_);
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

