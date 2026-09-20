// effectiveCropCornerRadiusForRect: @ 016478b8

/* Function Stack Size: 0x30 bytes */

double WCRSuperFloatCropViewController::effectiveCropCornerRadiusForRect_
                 (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  double in_d0;
  double in_d2;
  double in_d3;
  double local_88;
  double local_80;
  double local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_cropShapeUI_026b1ea8,param_3.field0_0x0.field0_0x0,
             param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
             param_3.field1_0x10.field1_0x8);
  if (((IVar1 != 0) ||
      (IVar1 = param_1, (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0),
      IVar1 != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropCornerRadius_026b1eb0), in_d0 < 0.5))
  {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropCornerRadius_026b1eb0);
    local_80 = in_d3;
    if (in_d2 < in_d3) {
      local_80 = in_d2;
    }
    local_88 = local_80 * 0.5;
    if (in_d0 < local_88) {
      local_88 = in_d0;
    }
    local_18 = local_88;
  }
  return local_18;
}

