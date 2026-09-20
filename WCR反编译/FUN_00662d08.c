// FUN_00662d08 @ 00662d08

void FUN_00662d08(undefined8 param_1)

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
    FUN_00655fa0(local_20,PTR_s_m_sessionInfo_026a6320);
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_00655d64(local_20,"m_sessionInfo");
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    if (local_30 == 0) {
      lVar2 = local_20;
      FUN_00655fa0(local_20,PTR_s_sessionInfo_026a6328);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_30 == 0) {
        lVar2 = local_20;
        FUN_00655d64(local_20,"m_baseSessionInfo");
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_30;
        local_30 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      lVar1 = local_30;
      if (local_30 == 0) {
        lVar2 = local_20;
        FUN_00655fa0(local_20,PTR_s_m_baseSessionInfo_026a6330);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_30;
        local_30 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        if (local_30 == 0) {
          lVar2 = local_20;
          FUN_00655d64(local_20,"_baseSessionInfo");
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_30;
          local_30 = lVar2;
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
        lVar2 = local_20;
        lVar1 = local_30;
        if (local_30 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = lVar2;
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

