// pixelate @ 016804bc

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::pixelate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateMode_026b1e08);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toggleAnnotate_026b1d88);
  }
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicBrushMode_026b1e10);
  if ((IVar1 & 1) == 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mosaicBrushStyle_026b27a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_enterMosaicBrushModeWithStyle__026b2840,IVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitMosaicBrushMode_026b2128);
  }
  return;
}

