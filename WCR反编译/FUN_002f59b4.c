// FUN_002f59b4 @ 002f59b4

byte FUN_002f59b4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_ac;
  ulong local_48;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_002f5d90();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      if (uVar1 == 0) {
        local_11 = 1;
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        FUN_002f5d90();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar2 & 1) == 0) {
          uVar1 = local_40[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          local_ac = 0;
          local_48 = uVar1;
          if (uVar1 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            FUN_002f5d90();
            local_ac = (uint)uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          local_11 = (local_ac & 1) != 0;
          local_24 = 1;
          _objc_storeStrong(&local_48,0);
        }
        else {
          local_11 = 1;
          local_24 = 1;
        }
      }
      _objc_storeStrong(local_40,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

