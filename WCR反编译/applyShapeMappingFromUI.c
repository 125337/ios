// applyShapeMappingFromUI @ 0166e9b0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::applyShapeMappingFromUI(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShapeUI_026b1ea8);
  if (IVar1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropShape__026b1f98,1);
  }
  else if (IVar1 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropShape__026b1f98,2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCropShape__026b1f98,0);
  }
  return;
}

