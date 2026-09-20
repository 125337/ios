// normalizedURL @ 00f0151c

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::normalizedURL(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  uint local_6c;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  while( true ) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__);
    bVar1 = false;
    if ((IVar4 & 1) != 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      bVar1 = 8 < IVar4;
    }
    IVar4 = local_28;
    if (!bVar1) break;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_substringToIndex__0269d6c0,IVar5 - 1);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_28 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  local_6c = 0;
  if ((IVar4 & 1) != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_6c = (uint)IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  IVar4 = local_28;
  if ((local_6c & 1) != 0) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_substringToIndex__0269d6c0,IVar5 - 4);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_28 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar5);
  }
  IVar4 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar4;
}

