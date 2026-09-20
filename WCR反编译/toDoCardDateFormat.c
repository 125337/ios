// toDoCardDateFormat @ 02177a20

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::toDoCardDateFormat(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (cfstringStruct *)param_1;
  FUN_0216dcbc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  pcVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_80 = local_30;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_80 = &::cf___;
  }
  else {
    local_40 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_80;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_a0 = &cf_yyyy_MM_ddEEE;
  }
  else {
    local_a0 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_a0;
}

