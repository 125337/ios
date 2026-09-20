// FUN_005bfbc8 @ 005bfbc8

byte FUN_005bfbc8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_005c00b4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    FUN_0059d260(uVar1,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_11 = false;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      local_11 = uVar1 != 0;
    }
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 0;
    local_30 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

