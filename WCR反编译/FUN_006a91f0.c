// FUN_006a91f0 @ 006a91f0

void FUN_006a91f0(undefined8 param_1)

{
  long lVar1;
  long local_58;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_006a9718();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_006a90c0();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    if (lVar1 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_58 = lVar1;
      if (lVar1 == 0) {
        local_58 = local_20;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_58;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

