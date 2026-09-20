// confirmSaveCurrentWithName: @ 01e3ba78

/* Function Stack Size: 0x18 bytes */

void WCRefineSvgColorSchemeHistoryViewController::confirmSaveCurrentWithName_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_40;
  ID local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,0);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mode_026ab488);
    puVar4 = local_40;
    if (IVar1 == 0) {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgFixedColorLight_026a8cc0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_svgFixedColorDark_026a8cc8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_recordSvgFixedColorSchemeHistory_026c63f8,puVar5,puVar6,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_recordSvgRandomColorSchemeHistor_026c6400,local_38);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_0RSSMr);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

