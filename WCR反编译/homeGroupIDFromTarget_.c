// homeGroupIDFromTarget: @ 014bbf48

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::homeGroupIDFromTarget_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  FUN_014b5580();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf_group_);
  pcVar2 = local_38;
  if (((ulong)pcVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
  }
  else {
    pcVar1 = &cf_group_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_group_,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = pcVar2;
    FUN_014b5580();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

