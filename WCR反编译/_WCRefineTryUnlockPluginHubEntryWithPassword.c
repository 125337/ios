// _WCRefineTryUnlockPluginHubEntryWithPassword @ 00698cbc

byte _WCRefineTryUnlockPluginHubEntryWithPassword(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  uint local_9c;
  cfstringStruct *local_80;
  undefined **local_70;
  byte local_61;
  undefined *local_60;
  bool local_51;
  cfstringStruct *local_50;
  byte local_41;
  undefined *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isWCRefinePluginHubEntryHidden_0269db70);
  pcVar3 = local_20;
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_80 = local_20;
    local_41 = 0;
    local_51 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_80 = &cf___;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_80;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    pcVar3 = local_38;
    local_61 = 0;
    local_9c = 1;
    if (pcVar4 != (cfstringStruct *)0x0) {
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_effectiveHideMyPagePluginPasswor_026a6560);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8);
      local_9c = (uint)pcVar3 ^ 1;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_9c & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setHideWCRefinePluginHubEntryArm_026a6548,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setHideWCRefinePluginHubEntryEna_026a6550,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_postGlobalSettingsChangedNotific_026a6558);
      ppuVar5 = &PTR___NSConcreteGlobalBlock_0257ea88;
      _objc_retainBlock();
      puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      local_70 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar6 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)local_70[2])();
      }
      local_11 = 1;
      local_2c = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      local_11 = 0;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

