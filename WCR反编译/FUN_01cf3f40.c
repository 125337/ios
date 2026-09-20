// FUN_01cf3f40 @ 01cf3f40

void FUN_01cf3f40(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar1 = local_20;
  if (pcVar2 == (cfstringStruct *)0x0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _WCRefineProfileBgNormalizedURLString();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__default;
    }
    else {
      puVar4 = local_30;
      _WCRefineProfileBgSafePathComponent();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&cf__link___);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

