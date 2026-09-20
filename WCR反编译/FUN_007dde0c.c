// FUN_007dde0c @ 007dde0c

void FUN_007dde0c(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double local_1b8;
  double local_190;
  long local_50 [3];
  undefined4 local_34;
  double local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  local_30 = param_1;
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNumberOfLines__026ca9d8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,local_28,PTR_s_setMinimumScaleFactor__026ca9d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLineBreakMode__026ca988,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setAllowsDefaultTighteningForTru_026a8428,0);
    uVar4 = 0x3ff0000000000000;
    if (1.0 < local_30) {
      lVar1 = local_28;
      local_190 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = lVar1;
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
        _CGRectGetMinX(local_190,uVar4);
        dVar3 = local_30;
        dVar5 = 12.0;
        if (local_190 < 12.0) {
          local_190 = 12.0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_bounds_026ca548);
        dVar2 = (param_3 - local_190) - 12.0;
        local_1b8 = dVar2;
        if (dVar3 < dVar2) {
          local_1b8 = dVar3;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
        dVar5 = dVar5 + 1.0;
        if (dVar5 < local_1b8) {
          dVar3 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar3,dVar5,local_1b8,dVar2,local_28,PTR_s_setFrame__026ca960);
        }
      }
      _objc_storeStrong(local_50,0);
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

