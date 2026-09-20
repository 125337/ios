// FUN_0069dcf4 @ 0069dcf4

void FUN_0069dcf4(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_98;
  uint local_7c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  uint local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UITextField_026ce2a0;
  local_20 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar5 = local_20;
  if (((ulong)pcVar3 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)pcVar5 & 1) == 0) {
      local_24 = 1;
      goto LAB_0069e030;
    }
  }
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_7c = 1;
  uVar2 = (uint)puVar6;
  if (((ulong)puVar6 & 1) != 0) {
    FUN_0069e0ac();
    local_7c = uVar2 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_7c & 1) == 0) {
    pcVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    local_39 = false;
    bVar1 = ((ulong)pcVar5 & 1) == 0;
    if (bVar1) {
      local_98 = &cf___;
    }
    else {
      local_98 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_98;
    }
    local_39 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_98;
    if ((local_39 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    pcVar5 = local_30;
    _WCRefineTryUnlockPluginHubEntryWithPassword();
    bVar1 = ((ulong)pcVar5 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,&cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resignFirstResponder_0269ea18);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_20;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_0069e2fc;
      local_50 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar5;
      _dispatch_async(puVar4,&local_68);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48,0);
    }
    local_24 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_24 = 1;
  }
LAB_0069e030:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

