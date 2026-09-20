// openLocalWatermarkSelector @ 017fdf58

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openLocalWatermarkSelector(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasScreenshotWatermarkAssetForIn_026b56a0,1);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb4lpS_j_g);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
    IVar2 = local_18;
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    local_28 = puVar3;
    if (puVar3 == (undefined1 *)0x0) {
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_017fe0f8;
      local_38 = &DAT_02589398;
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_requestAuthorization__026a1778,&local_50);
      _objc_storeStrong(&local_30,0);
    }
    else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentLocalWatermarkPicker_026b5a80);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    }
  }
  return;
}

