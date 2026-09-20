// FUN_00676838 @ 00676838

void FUN_00676838(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
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
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_cellConfig_026a6398);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellConfig_026a6398);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_leftConfig_026a63a0);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_48[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_leftConfig_026a63a0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_30;
          local_30 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
      }
      _objc_storeStrong(local_48,0);
    }
    if (local_30 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_leftConfig_026a63a0);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_leftConfig_026a63a0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    local_50 = 0;
    if (local_30 != 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    if (local_50 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    uVar1 = local_50;
    FUN_00676be0();
    _objc_retainAutoreleasedReturnValue();
    local_24 = 1;
    local_18 = uVar1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

