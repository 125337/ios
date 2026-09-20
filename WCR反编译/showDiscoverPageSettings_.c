// showDiscoverPageSettings: @ 01f42d20

/* Function Stack Size: 0x18 bytes */

void WCRefineUICleanViewController::showDiscoverPageSettings_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  ID IVar2;
  char *local_40;
  uint local_34;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "SettingDiscoverEntranceViewControllerV2";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ssu_tNS_u);
    local_34 = 1;
  }
  else {
    _objc_alloc_init();
    local_40 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Ssu_tSb);
    }
    local_34 = (uint)(pcVar1 == (char *)0x0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

