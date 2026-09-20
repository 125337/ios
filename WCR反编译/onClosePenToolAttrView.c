// onClosePenToolAttrView @ 016685b4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::onClosePenToolAttrView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateMode_026b1e08);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_toggleAnnotate_026b1d88);
  }
  return;
}

