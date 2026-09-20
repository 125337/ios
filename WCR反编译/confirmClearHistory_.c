// confirmClearHistory: @ 01e3be0c

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryViewController::confirmClearHistory_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mode_026ab488);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clearSvgFixedColorSchemeHistory_026c6408);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_clearSvgRandomColorSchemeHistory_026c6410);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SSMr_nzz);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

