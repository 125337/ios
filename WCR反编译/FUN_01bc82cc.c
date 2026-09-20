// FUN_01bc82cc @ 01bc82cc

void FUN_01bc82cc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  ulong local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  FUN_01be3980();
  if ((int)uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_e_gw;
  }
  else {
    local_18 = &DAT_028e45d8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258b9e0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar3 = DAT_028e45d0;
    uVar4 = NEON_ucvtf(uVar1 & 0xffffffff);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

