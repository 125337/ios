// FUN_00216580 @ 00216580

byte FUN_00216580(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_b0;
  byte local_ac;
  byte local_31;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  if (((local_20 == 0) ||
      (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768),
      (uVar1 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), uVar1 = local_20,
     param_1 <= DAT_02323cd0)) {
    local_11 = 0;
    goto LAB_00216850;
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_31 = (byte)uVar1;
  if ((uVar1 & 1) == 0) {
    FUN_001d1c14();
    uVar3 = uVar1;
    FUN_001d1ba0();
    if (uVar1 == 0) {
LAB_002166fc:
      local_b0 = 0;
      if (uVar3 != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,uVar3);
        local_b0 = (byte)uVar1;
      }
      local_ac = local_b0;
    }
    else {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,uVar1);
      local_ac = 1;
      if ((uVar4 & 1) == 0) goto LAB_002166fc;
    }
    local_31 = local_ac & 1;
  }
  if ((local_31 & 1) == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    if ((param_3 < 40.0) || (param_4 < 40.0)) {
      local_11 = 0;
    }
    else {
      uVar1 = local_20;
      FUN_00217cf8();
      local_11 = ((byte)uVar1 ^ 1) & 1;
    }
  }
LAB_00216850:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

