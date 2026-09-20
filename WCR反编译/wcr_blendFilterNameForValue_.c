// wcr_blendFilterNameForValue: @ 006fe074

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_blendFilterNameForValue_
             (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *local_18;
  
  if (param_3 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIOverlayBlendMode;
  }
  else if (param_3 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CISourceOverCompositing;
  }
  else if (param_3 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CISoftLightBlendMode;
  }
  else if (param_3 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIHardLightBlendMode;
  }
  else if (param_3 == 4) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIScreenBlendMode;
  }
  else if (param_3 == 5) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIDifferenceBlendMode;
  }
  else if (param_3 == 6) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIMultiplyBlendMode;
  }
  else if (param_3 == 7) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIColorDodgeBlendMode;
  }
  else if (param_3 == 8) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIColorBurnBlendMode;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_CIOverlayBlendMode;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

