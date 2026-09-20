// encryptedSessionsSummary @ 016f2674

/* Function Stack Size: 0x10 bytes */

ID SpecificPageLockViewController::encryptedSessionsSummary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_40;
  uint local_34;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (puVar3 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gb;
    local_34 = 1;
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    pcVar4 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708;
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_displayNameForSession__026a4518);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      pcVar4 = local_40;
      bVar1 = pcVar5 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
      }
      local_34 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_40,0);
      if (local_34 != 0) goto LAB_016f2898;
    }
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = pcVar4;
  }
LAB_016f2898:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

