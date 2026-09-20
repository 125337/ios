// FUN_008b9320 @ 008b9320

void FUN_008b9320(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
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
    goto LAB_008b9650;
  }
  uVar1 = local_20;
  FUN_008b5ddc(local_20,PTR_s_GetDataItem_026a13c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_20;
    FUN_008b5ddc(local_20,PTR_s_dataItem_026a13c8);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_008b9014();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar2;
      FUN_008b5ddc(uVar2,PTR_s_getFirstMediaData_026a13d0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_30;
      if (local_30 == 0) {
        uVar1 = local_48[0];
        FUN_008b5ddc(local_48[0],PTR_s_dataList_026a13d8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) == 0) {
LAB_008b95f0:
          local_18 = 0;
        }
        else {
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
          if (uVar1 == 0) goto LAB_008b95f0;
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_18 = uVar1;
        }
        local_24 = 1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
        local_24 = 1;
      }
      _objc_storeStrong(local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_24 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_24 = 1;
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_30,0);
LAB_008b9650:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

