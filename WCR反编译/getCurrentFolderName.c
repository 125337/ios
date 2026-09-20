// getCurrentFolderName @ 01cdf62c

/* Function Stack Size: 0x10 bytes */

ID WCRefineProfileCardBeautifyViewController::getCurrentFolderName(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if ((local_30 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 != (cfstringStruct *)0x0)) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0), pcVar3 = local_38,
       pcVar2 == (cfstringStruct *)0x0)) {
      uVar4 = 0;
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      uVar4 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar4,&local_38,0);
    if (bVar1) goto LAB_01cdf798;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &::cf__;
LAB_01cdf798:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

