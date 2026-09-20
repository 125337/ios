// pluginHubConfiguredAvatarPath @ 00eb26b8

/* Function Stack Size: 0x10 bytes */

ID WCRefineAvatarFramePageOverlayHelper::pluginHubConfiguredAvatarPath(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_a4;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_pluginTopAvatarEnabled_026a65b8);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_documentsPath_026ab1d0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pluginTopAvatarImagePath_026a65c8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_80 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_80;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if ((pcVar1 != (cfstringStruct *)0x0) &&
         ((pcVar1 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__),
          ((ulong)pcVar1 & 1) != 0 &&
          (pcVar1 = local_48, puVar4 = PTR_s_rangeOfString__0269d838,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_rangeOfString__0269d838,&cf__Documents_),
          pcVar1 != (cfstringStruct *)0x7fffffffffffffff)))) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        pcVar2 = local_40;
        if ((cfstringStruct *)(puVar4 + (long)&pcVar1->field0_0x0) < pcVar3) {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_substringFromIndex__0269d120,
                     (cfstringStruct *)(puVar4 + (long)&pcVar1->field0_0x0));
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_48;
          local_48 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
      }
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByAppendingPathComponent__026cab30,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    local_a4 = 1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a4 = (uint)puVar5 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    pcVar1 = local_48;
    if ((local_a4 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    else {
      local_18 = (cfstringStruct *)0x0;
    }
    local_34 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

