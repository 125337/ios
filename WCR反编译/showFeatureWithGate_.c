// showFeatureWithGate: @ 01641ba4

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatCropViewController::showFeatureWithGate_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct **ppcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  ppcVar1 = &local_28;
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(ppcVar1,param_3);
  FUN_0163fcbc();
  if (((ulong)ppcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g);
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_48 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_48;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_hl);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_WYX);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_OCR);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__);
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_4lpS)
            ;
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_4V)
              ;
              if (((ulong)pcVar2 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copySelectionAsLayer_026b1db0);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyWatermark_026b1da8);
            }
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_runTranslate_026b1da0);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_runOCR_026b1d98);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyShellFrame_026b1d90);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleAnnotate_026b1d88);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

