// FUN_00655814 @ 00655814

void FUN_00655814(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
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
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_20;
    if ((uVar2 & 1) == 0) {
      FUN_00655fa0(local_20,PTR_s_messageWrap_0269d070);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      if (uVar1 == 0) {
        uVar2 = local_20;
        FUN_00655fa0(local_20,PTR_s_m_messageWrap_026a62b8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40[0];
        local_40[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_40[0];
        if (local_40[0] == 0) {
          uVar2 = local_20;
          FUN_00655d64(local_20,"m_messageWrap");
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_40[0];
          local_40[0] = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
          uVar1 = local_40[0];
          if (local_40[0] == 0) {
            uVar2 = local_20;
            FUN_00655d64(local_20,"_messageWrap");
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_40[0];
            local_40[0] = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            uVar1 = local_40[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
          }
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      local_24 = 1;
      _objc_storeStrong(local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

