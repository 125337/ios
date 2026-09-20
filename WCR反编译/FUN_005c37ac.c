// FUN_005c37ac @ 005c37ac

void FUN_005c37ac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    FUN_005b9830(local_20,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    uVar2 = local_20;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

