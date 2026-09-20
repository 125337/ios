// cropShadowEnabled @ 016477a4

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::cropShadowEnabled(ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  byte local_2c;
  byte local_11;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShadowAmount_026b1ee0);
  if (0.5 < in_d0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
    if (IVar1 == 2) {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 0;
      if (IVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformClosed_026b1ef0);
        local_2c = (byte)param_1;
      }
      local_11 = local_2c & 1;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
  return (uint)local_11;
}

