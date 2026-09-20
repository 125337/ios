// FUN_01a8e4c0 @ 01a8e4c0

void FUN_01a8e4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  int local_4c;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_30 = (undefined *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = param_1 + 0x20;
  local_40 = param_1;
  _objc_loadWeakRetained();
  puVar2 = PTR_WCRefineGradientPalette_026ce910;
  local_48 = lVar1;
  if (lVar1 == 0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_lightStops_026acc90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedHexStops__026acc78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar2 = PTR_WCRefineGradientPalette_026ce910;
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_darkStops_026acc88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_normalizedHexStops__026acc78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_e0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_e0;
    }
    else {
      local_e0 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_setObject_atIndexedSubscript__0269e970,local_e0,
               *(undefined8 *)(param_1 + 0x28));
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_e8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_e8;
    }
    else {
      local_e8 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_atIndexedSubscript__0269e970,local_e8,
               *(undefined8 *)(param_1 + 0x28));
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setPresetId__026bd998,_WCRefineGradientPresetCustom);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLightStops__026acc48,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDarkStops__026acc50,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_refreshPreview_026bd868);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_refreshDirectionChips_026bd870);
    lVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

