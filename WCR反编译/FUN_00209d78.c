// FUN_00209d78 @ 00209d78

void FUN_00209d78(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_40 [3];
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar2 = local_20;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_40[0] = lVar2;
      while( true ) {
        lVar2 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        local_18 = local_40[0];
        if (lVar2 == 0) break;
        lVar1 = local_40[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_40[0];
        local_40[0] = lVar1;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      _objc_storeStrong(local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = lVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

