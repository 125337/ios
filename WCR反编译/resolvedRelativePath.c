// resolvedRelativePath @ 015b2584

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::resolvedRelativePath(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_defaultRelativePath_026ae1e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar2 & 1) != 0) {
    _NSHomeDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_78;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_38;
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,local_40),
       pcVar2 = local_30, ((ulong)pcVar3 & 1) == 0)) {
      bVar1 = false;
    }
    else {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_18 = pcVar2;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_015b2848;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar2;
LAB_015b2848:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

