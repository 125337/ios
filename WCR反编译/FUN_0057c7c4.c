// FUN_0057c7c4 @ 0057c7c4

void FUN_0057c7c4(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_0057aaf8();
  if ((uVar1 & 1) == 0) {
    pcVar2 = (cfstringStruct *)0x0;
    FUN_0058a730();
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
  }
  else {
    uVar1 = local_30;
    FUN_00588d98();
    if ((uVar1 - 6 == 0) ||
       (uVar3 = local_30, FUN_005820e8(uVar1 - 6,local_30,&cf_loopIntervalMinutes,0),
       0 < (long)uVar3)) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar1 = local_30;
      FUN_00582d30();
      FUN_00582f2c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_30;
      FUN_0058a8c0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      uVar1 = local_30;
      FUN_00588d98(uVar3);
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (uVar1 == 1) {
        uVar1 = local_30;
        FUN_0058a8c0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_k_Y);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else if (uVar1 == 2) {
        FUN_005820e8(local_30,&cf_intervalHours,2);
        uVar1 = local_30;
        FUN_0058a8c0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_k);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else if (uVar1 == 3) {
        FUN_005820e8(local_30,&cf_intervalMinutes,0x1e);
        uVar1 = local_30;
        FUN_0058a8c0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_k);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else if (uVar1 == 4) {
        uVar1 = local_30;
        FUN_005820e8(local_30,&cf_weekday,1);
        FUN_0058a9fc();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_30;
        FUN_0058a8c0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_khT_);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else if (uVar1 == 5) {
        FUN_005820e8(local_30,&cf_dayOfMonth,1);
        uVar1 = local_30;
        FUN_0058a8c0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf_kg);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_N;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

