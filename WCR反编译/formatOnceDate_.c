// formatOnceDate: @ 014b7108

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::formatOnceDate_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
  }
  else {
    local_18 = &DAT_028e3678;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585ee0);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar3 = DAT_028e3670;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3670,PTR_s_stringFromDate__0269d1d8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

