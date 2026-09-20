// FUN_0027b798 @ 0027b798

void FUN_0027b798(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_f8;
  ulong local_70 [2];
  ulong local_60 [4];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    local_40 = 0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_dataItem);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_40 == 0) {
      local_28 = 0;
      local_34 = 1;
    }
    else {
      local_60[0] = 0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_mediaArray);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60[0];
      local_60[0] = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_60[0];
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_70[0] = 0;
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_media);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_70[0];
        local_70[0] = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_70[0] != 0) {
          uVar1 = local_70[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70[0],PTR_s_valueForKey__0269d128,&cf_mediaArray);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_60[0];
          local_60[0] = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        _objc_storeStrong(local_70,0);
      }
      uVar3 = local_60[0];
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) == 0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_60[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_f8;
      local_34 = 1;
      _objc_storeStrong(local_60,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

