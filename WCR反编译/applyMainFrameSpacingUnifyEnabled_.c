// applyMainFrameSpacingUnifyEnabled: @ 01a79ed4

/* Function Stack Size: 0x14 bytes */

void WCRefineGlobalCornerSettingsViewController::applyMainFrameSpacingUnifyEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  char *pcVar2;
  char *local_38;
  cfstringStruct *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  local_30 = &::cf__;
  if ((local_21 & 1) == 0) {
    local_30 = &cf__b_Y_j_;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_zT_T,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zsS_T,local_18,
             PTR_s_restartApp__026b8f68);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

