// atMentionNotificationSessionID @ 01fea884

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::atMentionNotificationSessionID(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = (cfstringStruct *)param_1;
  FUN_01fd9510();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
    local_48 = &::cf___;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

