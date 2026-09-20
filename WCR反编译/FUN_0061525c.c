// FUN_0061525c @ 0061525c

byte FUN_0061525c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_48 [3];
  ulong local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_containsString__0269d0b0,&cf_ActivityIndicator);
    if (((uVar1 & 1) == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_Loading),
       uVar1 = local_20, (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar1;
      while (local_48[0] != 0) {
        uVar1 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          local_24 = 1;
          goto LAB_006154d0;
        }
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48[0];
        local_48[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_24 = 2;
LAB_006154d0:
      _objc_storeStrong(local_48,0);
      iVar3 = local_24 + -2;
      if (iVar3 == 0) {
        iVar3 = 1;
        local_11 = 0;
        local_24 = 1;
      }
    }
    else {
      iVar3 = 1;
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(iVar3,&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

