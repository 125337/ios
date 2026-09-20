// undockPillIfNeeded @ 00fda2bc

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::undockPillIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  double in_d0;
  double in_d1;
  undefined8 uVar4;
  double dVar5;
  double in_d2;
  double in_d3;
  double local_188;
  double local_180;
  double local_160;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  ID local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined4 local_cc;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_80;
  double local_68;
  double local_58;
  double local_50;
  double local_48;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pillDocked_026ad328);
  local_39 = 0;
  bVar2 = false;
  if ((param_1 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = DAT_02323ec0 <= in_d0;
    in_d1 = DAT_02323ec0;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (!bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPillDocked__026ad2a0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    IVar3 = local_28;
    local_58 = in_d1;
    local_50 = in_d2;
    local_48 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = in_d1;
    _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
    uVar4 = 0x3fe0000000000000;
    in_d0 = in_d0 * 0.5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    local_68 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_50 * 0.5 <= in_d0) {
      local_160 = (local_50 - 16.0) - local_68;
    }
    else {
      local_160 = local_68 + 16.0;
    }
    dVar5 = local_68;
    local_a0 = in_d0;
    local_98 = uVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_90 = local_160;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = local_160;
    local_c0 = dVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_100 = local_28;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_cc = 0x50;
    local_180 = dVar5;
    if (dVar5 < 80.0) {
      local_180 = 80.0;
    }
    local_d8 = local_180;
    local_b0 = local_180;
    local_e0 = local_48 - 80.0;
    local_188 = local_e0;
    if (local_180 < local_e0) {
      local_188 = local_180;
    }
    local_e8 = local_188;
    local_a8 = local_188;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_00fda6f0;
    local_108 = &DAT_02580e60;
    local_b8 = dVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_90;
    local_f0 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da8,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_120);
    _objc_storeStrong(&local_100,0);
  }
  return;
}

