// FUN_000750a0 @ 000750a0

void FUN_000750a0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  if (((local_18 != 0) &&
      ((*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548), 0.5 < param_3)) &&
     (0.5 < param_4)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutIfNeeded_026ca790);
    FUN_0007725c(local_18,2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

