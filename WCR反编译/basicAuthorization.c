// basicAuthorization @ 00f029c4

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::basicAuthorization(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  undefined *local_e0;
  cfstringStruct *local_c0;
  bool local_79;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  ID local_50;
  cfstringStruct *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_c0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  IVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_51 = 0;
  bVar1 = false;
  if (IVar6 == 0) {
    IVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_trimmed__026aba28,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar6 == 0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar1) {
    local_28 = (undefined *)0x0;
    local_58 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_e0 = (undefined *)0x0;
    }
    else {
      local_e0 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Basic__);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_e0;
    }
    local_79 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_e0;
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    local_58 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

