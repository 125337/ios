// isCustomSelected @ 01a8cad0

/* Function Stack Size: 0x10 bytes */

bool WCRefineGradientPalettePickerViewController::isCustomSelected(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  uint local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presetId_026bd838);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_38 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_38;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_3c = 1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_isEqualToString__0269ccc8,_WCRefineGradientPresetCustom);
    local_3c = (uint)pcVar1;
  }
  _objc_storeStrong(&local_28,0);
  return local_3c & 1;
}

