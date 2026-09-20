// confirmButtonTapped @ 019091b0

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::confirmButtonTapped(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveColorToHistory_026b89b8);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_callback_026b8988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_singleColorMode_026b85b0);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_callback_026b8988);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLightHex_026b8560);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDarkHex_026b8570);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)pcVar2->field2_0x10)(pcVar2,pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLightHex_026b8560);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = false;
      local_50 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_30 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDarkHex_026b8570);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_60 = local_30;
        if (local_30 == (cfstringStruct *)0x0) {
          local_60 = &cf__FFFFFF;
        }
        local_50 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_50;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_30);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_callback_026b8988);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)pcVar2->field2_0x10)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_28,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_leaveColorPicker_026b89c0);
  return;
}

