// confirmTapped @ 01a8fc08

/* Function Stack Size: 0x10 bytes */

void WCRefineGradientPalettePickerViewController::confirmTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_88;
  ID local_40;
  ID local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = PTR_WCRefineGradientPalette_026ce910;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lightStops_026acc90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedHexStops__026acc78);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineGradientPalette_026ce910;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_darkStops_026acc88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedHexStops__026acc78);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presetId_026bd838);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar4 == 0) {
    local_88 = _WCRefineGradientPresetCustom;
  }
  else {
    local_88 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presetId_026bd838);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  if (IVar4 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    puVar2 = local_30;
    IVar3 = local_38;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_direction_026a5bb0);
    (**(code **)(IVar4 + 0x10))(IVar4,IVar3,puVar1,puVar2,IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissViewControllerAnimated_co_0269cf98,1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

