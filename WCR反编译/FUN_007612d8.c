// FUN_007612d8 @ 007612d8

byte FUN_007612d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong local_38;
  ulong local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    iVar3 = 1;
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_0075f444(local_20,&cf_MMRecordButton);
    uVar2 = local_20;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = uVar2;
      while (local_30 != 0) {
        uVar2 = local_30;
        FUN_0075f444(local_30,&cf_MMInputToolView);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          local_24 = 1;
          goto LAB_00761424;
        }
        uVar2 = local_30;
        FUN_0075f444(local_30,&cf_InputToolViewBar);
        if ((uVar2 & 1) != 0) {
          local_11 = 1;
          local_24 = 1;
          goto LAB_00761424;
        }
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_30;
        local_30 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      local_24 = 2;
LAB_00761424:
      _objc_storeStrong(&local_30,0);
      iVar3 = local_24 + -2;
      if (iVar3 == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar2;
        while (local_38 != 0) {
          uVar2 = local_38;
          FUN_0075f444(local_38,&cf_MMInputToolView);
          if ((uVar2 & 1) != 0) {
            local_11 = 1;
            local_24 = 1;
            goto LAB_00761520;
          }
          uVar2 = local_38;
          FUN_0075f444(local_38,&cf_InputToolViewBar);
          if ((uVar2 & 1) != 0) {
            local_11 = 1;
            local_24 = 1;
            goto LAB_00761520;
          }
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_38;
          local_38 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        local_24 = 5;
LAB_00761520:
        _objc_storeStrong(&local_38,0);
        iVar3 = local_24 + -5;
        if (iVar3 == 0) {
          iVar3 = 1;
          local_11 = 0;
          local_24 = 1;
        }
      }
    }
    else {
      iVar3 = 1;
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(iVar3,&local_20,0);
  return local_11 & 1;
}

