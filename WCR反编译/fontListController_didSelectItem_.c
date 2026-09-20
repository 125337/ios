// fontListController:didSelectItem: @ 019dd22c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRefineFontBeautifyViewController::fontListController_didSelectItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  if (local_30[0] == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setFontBeautifyEnabled__026bafb0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFontBeautifyFontPath__026b2da0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFontBeautifyPostScriptName__026b2da8,&::cf___);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_38,PTR_s_setFontBeautifyScale__026baf78);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFontBeautifyBoldEnhanced__026bafd8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFontBeautifyWeightDelta__026baf80,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFontBeautifyLetterSpacing__026baf88);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_38,PTR_s_setFontBeautifyLineSpacing__026baf90);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFontBeautifyApplyWebViewEnabl_026bafb8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFontBeautifyApplyMiniProgramE_026bafc0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    FUN_019dc784();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__b_Y__W_SO);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_activateFontItem__026bafe0,local_30[0]);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

