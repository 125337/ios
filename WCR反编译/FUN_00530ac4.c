// FUN_00530ac4 @ 00530ac4

void FUN_00530ac4(uint param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_68;
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
    uVar3 = NEON_ucvtf((ulong)param_1);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    local_18 = &DAT_028cb228;
    local_20 = 0;
    local_38 = puVar1;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257dc48);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar2 = DAT_028cb220;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb220,PTR_s_stringFromDate__0269d1d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

