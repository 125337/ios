// handleMenuBackgroundImageAlphaInput: @ 01b8abc4

/* Function Stack Size: 0x18 bytes */

void WCRefineMenuBeautifyViewController::handleMenuBackgroundImageAlphaInput_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  float fVar3;
  double dVar4;
  undefined *local_50;
  double local_48;
  double local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_componentsSeparatedByString__0269d3c0,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  fVar3 = 0.0;
  local_40 = 1.0;
  local_48 = 1.0;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
  if (uVar1 != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = (double)fVar3;
    local_40 = dVar4;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    fVar3 = SUB84(dVar4,0);
  }
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (1 < uVar1) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = (double)fVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_40 < 0.0) {
    local_40 = 0.0;
  }
  if (1.0 < local_40) {
    local_40 = 1.0;
  }
  if (local_48 < 0.0) {
    local_48 = 0.0;
  }
  if (1.0 < local_48) {
    local_48 = 1.0;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,puVar2,PTR_s_setMenuBackgroundImageAlpha__026bfe10)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,local_50,PTR_s_setMenuBackgroundViewAlpha__026bfe18);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

