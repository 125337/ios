// openScreenRecordingFrameTemplateSelector @ 017f2740

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openScreenRecordingFrameTemplateSelector
               (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectingScreenRecordingFrame_026b5888,1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineScreenshotFrameLibraryViewController_026ce8f8;
  local_28 = pcVar1;
  _objc_alloc_init();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setIsSelectMode__026b5890,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDelegate__026ca910,local_18);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenRecordingFrameTemplate_026a7490);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = local_28;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenshotFrameTemplate_026a7498);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_68;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_screenRecordingFrameTemplate_026a7490);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_68;
  if (pcVar3 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,
             PTR_s_setSelectedFramePathOverride__026b58f0);
  if (((ulong)puVar2 & 1) != 0) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    else {
      local_88 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setValue_forKey__0269d300,local_88,&cf_selectedFramePathOverride);
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

