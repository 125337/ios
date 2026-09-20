// updateColorDisplay @ 01907388

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::updateColorDisplay(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined1 local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isLightMode_026b8018);
  local_41 = 0;
  local_51 = 0;
  local_90 = local_28;
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentDarkHex_026b8570);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_90;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLightHex_026b8560);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_90;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorFromHexString__026b30d8,local_38);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_28;
  local_60 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_colorDisplayView_026b8710);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_livePreviewEnabled_026b8980);
  local_69 = 0;
  bVar2 = false;
  uVar1 = ((ulong)pcVar3 & 1) != 0;
  if ((bool)uVar1) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_callback_026b8988);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = pcVar3 != (cfstringStruct *)0x0;
    local_69 = uVar1;
    local_68 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar1 = local_69;
  }
  local_69 = uVar1;
  if (bVar2) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_singleColorMode_026b85b0);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_callback_026b8988);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLightHex_026b8560);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentDarkHex_026b8570);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)pcVar3->field2_0x10)(pcVar3,pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentLightHex_026b8560);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = false;
      local_c8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_80 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentDarkHex_026b8570);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_d8 = local_80;
        if (local_80 == (cfstringStruct *)0x0) {
          local_d8 = &cf__FFFFFF;
        }
        local_c8 = local_d8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_c8;
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_callback_026b8988);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)pcVar3->field2_0x10)();
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  return;
}

