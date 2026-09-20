// openLocalFrameSelector @ 017f67f4

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openLocalFrameSelector(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined1 *local_40;
  undefined4 local_38;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_screenshotFrameTemplate_026a7498);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar2 = true;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = puVar4 == (undefined *)0x0;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbWYX_j_g);
    local_38 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
    IVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    local_40 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_017f6a98;
      local_50 = &DAT_02589398;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestAuthorization__026a1778,&local_68);
      _objc_storeStrong(&local_48,0);
    }
    else if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentLocalFramePicker_026b5998);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    }
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

