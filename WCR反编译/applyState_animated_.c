// applyState:animated: @ 0170e794

/* Function Stack Size: 0x18 bytes */

void SwitchThemesDayNight::applyState_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined **ppuVar1;
  double in_d2;
  double in_d3;
  double local_110;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  byte local_b8;
  undefined **local_b0;
  double local_a8;
  double local_a0;
  double local_90;
  double local_68;
  double local_40;
  byte local_32;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_32 = (byte)param_4;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  local_40 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  if ((0.0 < local_40) && (0.0 < in_d3)) {
    local_68 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knobDiameter_026b3898);
    local_90 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_knobMargin_026b3778);
    local_e0 = local_28;
    if ((local_31 & 1) == 0) {
      local_110 = in_d3 + local_90 / 2.0;
    }
    else {
      local_110 = (local_40 - in_d3) - local_90 / 2.0;
    }
    local_a0 = local_110;
    local_a8 = in_d3 + local_90 / 2.0;
    ppuVar1 = &local_100;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_0170e9fc;
    local_e8 = &DAT_02588580;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_31 & 1;
    local_d8 = local_a0;
    local_d0 = local_a8;
    local_c8 = local_90;
    local_c0 = local_68;
    _objc_retainBlock();
    local_b0 = ppuVar1;
    if ((local_32 & 1) == 0) {
      (*(code *)ppuVar1[2])();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324020,0,PTR__OBJC_CLASS___UIView_026cdfd8,
                 PTR_s_animateWithDuration_delay_option_026ca4f0,0x30000,ppuVar1,0);
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_e0,0);
  }
  return;
}

