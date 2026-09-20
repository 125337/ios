// saveColorToHistory @ 0190b718

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::saveColorToHistory(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ID local_98;
  ID local_90;
  int local_84;
  ID local_80;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ID local_60;
  byte local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLightMode_026b8018);
  local_41 = 0;
  local_51 = 0;
  local_98 = local_28;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_98;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_98;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorFromHexString__026b30d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_61 = 0;
  local_70 = 0xffffffffffffffff;
  local_78 = 0;
  local_60 = IVar2;
  while( true ) {
    uVar1 = local_78;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 <= uVar1) break;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isColor_similarTo__026b89f0,local_60,local_80);
    if ((IVar2 & 1) == 0) {
      local_84 = 0;
    }
    else {
      local_61 = 1;
      local_70 = local_78;
      local_84 = 2;
    }
    _objc_storeStrong(&local_80,0);
    if (local_84 != 0) break;
    local_78 = local_78 + 1;
  }
  if ((local_61 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (0x14 < IVar3) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  else {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_historyColors_026b88d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_90,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveHistoryColorsToUserDefaults_026b89f8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateHistoryColorButtons_026b88d0);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  return;
}

