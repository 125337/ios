// displayTime: @ 014e0c20

/* Function Stack Size: 0x14 bytes */

ID WCRefineSessionStatsEngine::displayTime_(ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
  }
  else {
    local_18 = &DAT_028e36b8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586018);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar2 = DAT_028e36b0;
    uVar3 = NEON_ucvtf((ulong)param_3);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

