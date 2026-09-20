// FUN_005d07f4 @ 005d07f4

void FUN_005d07f4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a0;
  ulong local_48 [3];
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_contentDesc);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar1 == 0)) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_contentObj);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128,&cf_desc);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(local_48,0);
    }
    uVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a0;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

