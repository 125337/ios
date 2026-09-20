// FUN_0157da90 @ 0157da90

void FUN_0157da90(uint param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_90;
  undefined *local_38;
  uint local_2c;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_2c = param_1;
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    local_18 = &DAT_028e3a58;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025869b0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar4 = NEON_ucvtf((ulong)local_2c);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = DAT_028e3a50;
    local_38 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(pcVar1);
      puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a50,PTR_s_setTimeZone__0269f9d8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = DAT_028e3a50;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a50,PTR_s_stringFromDate__0269d1d8,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_90 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_90;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_sync_exit(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

