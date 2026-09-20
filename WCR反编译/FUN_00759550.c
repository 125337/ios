// FUN_00759550 @ 00759550

void FUN_00759550(double param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined *local_50;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar4 = local_20;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_18 = 0;
    local_38 = 1;
  }
  else {
    local_40 = 0;
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    _objc_sync_enter();
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40;
    local_40 = lVar6;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    _objc_sync_exit(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_recordedAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar4);
    bVar2 = false;
    bVar1 = true;
    if ((local_40 != 0) && (bVar1 = true, 0.0 < param_1)) {
      local_50 = PTR__OBJC_CLASS___NSDate_026cdf88;
      dVar7 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = 15.0 < dVar7 - param_1;
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    lVar4 = local_40;
    if (bVar1) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar4;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

