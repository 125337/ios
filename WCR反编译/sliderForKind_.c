// sliderForKind: @ 01c2b0b4

/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRNameplateAdjustmentViewController::sliderForKind_
          (WCRNameplateAdjustmentViewController *this,ID param_1,SEL param_2,long_long param_3)

{
  undefined8 in_d0;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_3 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scale_026ca830);
    local_38 = in_d0;
  }
  else {
    if (param_3 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_offsetX_026c16c0);
      local_40 = in_d0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_offsetY_026c16c8);
      local_40 = in_d0;
    }
    local_38 = local_40;
  }
  FUN_01c2b198(local_38,param_1,PTR_s_sliderChanged__026b8190,PTR_s_sliderEnded__026b8198,
               PTR_s_valueButtonTapped__026b81a8,param_3,0);
  return param_1;
}

