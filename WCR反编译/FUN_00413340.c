// FUN_00413340 @ 00413340

void FUN_00413340(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = local_20;
    FUN_004055cc(local_20,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_20;
    FUN_00412e78(local_20,&cf_mesSvrID);
    pcVar4 = local_20;
    FUN_0040bb14(local_20,&cf_localID);
    pcVar5 = local_20;
    FUN_0040bb14(local_20,&cf_messageType);
    pcVar6 = pcVar2;
    FUN_0041374c(pcVar2,pcVar3,(ulong)pcVar4 & 0xffffffff,(ulong)pcVar5 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

