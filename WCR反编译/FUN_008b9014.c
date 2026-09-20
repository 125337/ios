// FUN_008b9014 @ 008b9014

void FUN_008b9014(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_008b5ddc(local_20,PTR_s_GetParent_026a1450);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_008b5ddc(local_20,PTR_s_parent_026a1458);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_18 = local_20;
      lVar1 = local_30;
      if (local_30 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

