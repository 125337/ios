// voicePackRelativePath @ 02039284

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::voicePackRelativePath(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  SEL SVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_78;
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
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  pcVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)pcVar4 & 1) == 0) ||
     (pcVar4 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar4 == (cfstringStruct *)0x0)) {
    _objc_storeStrong(&local_30,&cf_L);
    pcVar1 = local_28;
    pcVar4 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setObject_forKey__026ca9e8,pcVar4);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  pcVar4 = local_30;
  FUN_020394b4();
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_78 = &cf_L;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_78;
}

