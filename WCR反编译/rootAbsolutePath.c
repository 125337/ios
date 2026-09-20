// rootAbsolutePath @ 015b2864

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::rootAbsolutePath(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_resolvedRelativePath_026ae1f0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar2 = local_30;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    pcVar2 = local_30;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

