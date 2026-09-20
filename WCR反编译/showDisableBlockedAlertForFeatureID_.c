// showDisableBlockedAlertForFeatureID: @ 01c90cfc

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginFeatureManagementViewController::showDisableBlockedAlertForFeatureID_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_48;
  uint local_3c;
  char *local_38;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_eQSS_MRNSy_u;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isCloudHiddenFeatureID__026c2b10,local_28);
  if ((IVar2 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_feed_author);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_isEqualToString__0269ccc8,&cf_plugin_management);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_30,&cf_cN_tV_>f_yNSy_u);
      }
    }
    else {
      _objc_storeStrong(&local_30,&cf_bU1);
    }
  }
  else {
    _objc_storeStrong(&local_30,&cf_eQS_NzsQ_g0Wel9eV>f_y);
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar4 != (char *)0x0;
  local_38 = pcVar4;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_bwSN,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

