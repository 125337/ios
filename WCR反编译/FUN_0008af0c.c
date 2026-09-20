// FUN_0008af0c @ 0008af0c

void FUN_0008af0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint local_6c;
  long local_38;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    for (local_30 = 0; local_28 != 0 && local_30 < 7; local_30 = local_30 + 1) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_6c = 1;
      local_38 = lVar1;
      if (local_30 + -2 != 0 && 1 < local_30) {
        FUN_0008bce8(local_30 + -2);
        local_6c = (uint)lVar1;
      }
      if ((local_6c & 1) != 0) {
        FUN_0008baac(local_28);
      }
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_28 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

