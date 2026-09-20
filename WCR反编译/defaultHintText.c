// defaultHintText @ 016466b8

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatCropViewController::defaultHintText(ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
  if (IVar1 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_1u_S_us_Q__Sf_0p_bnx;
  }
  else {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShape_026b1ea0);
    if (IVar1 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_Wb__SnbbFhSbR_;
    }
    else {
      IVar1 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShapeUI_026b1ea8);
      if ((IVar1 != 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropCornerRadius_026b1eb0),
         in_d0 <= 0.5)) {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShadowEnabled_026b1eb8);
        local_18 = &cf_wb__;
        if ((param_1 & 1) == 0) {
          local_18 = &cf_nbFhSphQO_b_rW_;
        }
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cropShadowEnabled_026b1eb8);
        local_18 = &cf_Wwb__;
        if ((param_1 & 1) == 0) {
          local_18 = &cf_Wwb_nbFhb_rb_gSWN4q_0;
        }
        (*(code *)PTR__objc_retain_02578638)();
      }
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

