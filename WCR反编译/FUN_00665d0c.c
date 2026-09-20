// FUN_00665d0c @ 00665d0c

void FUN_00665d0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_00655fa0(local_20,PTR_s_m_msgWrap_026a6300);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_20;
    FUN_00655d64(local_20,"m_msgWrap");
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  lVar1 = local_30;
  if (local_30 == 0) {
    lVar2 = local_20;
    FUN_00655fa0(local_20,PTR_s_lastMessage_026a6308);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_30 == 0) {
      lVar2 = local_20;
      FUN_00655d64(local_20,"lastMessage");
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    if (local_30 == 0) {
      lVar2 = local_28;
      FUN_00655fa0(local_28,PTR_s_lastMessage_026a6308);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_30 == 0) {
        lVar2 = local_28;
        FUN_00655d64(local_28,"lastMessage");
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_30;
        local_30 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      lVar1 = local_30;
      if (local_30 == 0) {
        lVar2 = local_28;
        FUN_00655814();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_30;
        local_30 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        lVar1 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = lVar1;
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
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

