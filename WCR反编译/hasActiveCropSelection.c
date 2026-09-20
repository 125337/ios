// hasActiveCropSelection @ 01649d7c

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::hasActiveCropSelection(ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d2;
  double in_d3;
  bool local_84;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropRect_026b1ec0);
  _CGRectIsEmpty();
  local_84 = 0;
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropRect_026b1ec0);
    local_84 = 0;
    if (24.0 <= in_d2) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropRect_026b1ec0);
      local_84 = (bool)(24.0 <= in_d3);
    }
  }
  return local_84;
}

