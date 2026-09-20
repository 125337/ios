// normalizedRemotePath @ 00f012c8

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::normalizedRemotePath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_28,&cf__WCRefine_WCRefineBackup_zip);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = &cf__;
    (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_28;
    local_28 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((cfstringStruct *)0x1 < pcVar3) {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_stringByAppendingString__0269d398,&cf_WCRefineBackup_zip);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_28;
      local_28 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__);
  if (((ulong)pcVar3 & 1) != 0) {
    _objc_storeStrong(&local_28,&cf__WCRefine_WCRefineBackup_zip);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

