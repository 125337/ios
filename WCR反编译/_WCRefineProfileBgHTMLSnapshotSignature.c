// _WCRefineProfileBgHTMLSnapshotSignature @ 01cf3a98

void _WCRefineProfileBgHTMLSnapshotSignature(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_60 = &cf___;
  }
  else {
    local_60 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  local_30 = (cfstringStruct *)0x0;
  local_38 = (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_40 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  pcVar2 = (cfstringStruct *)0x0;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_http___);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_https___);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_28;
        FUN_01cf3cc4(local_28,&local_30,&local_38);
      }
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_01cf3f40();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_stringWithFormat__0269cca8,&cf________llu__llu__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

