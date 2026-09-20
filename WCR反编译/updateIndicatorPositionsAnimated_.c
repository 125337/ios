// updateIndicatorPositionsAnimated: @ 01905780

/* Function Stack Size: 0x14 bytes */

void WCRefineColorPickerController::updateIndicatorPositionsAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_d1;
  double in_d2;
  double in_d3;
  double dVar11;
  ID local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  byte local_139;
  ID local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_90;
  double dStack_88;
  double local_60;
  double local_58;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  dVar3 = DAT_02323da8;
  dVar2 = DAT_02323d00;
  local_31 = (byte)param_3;
  dVar9 = DAT_02323d00;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hueSliderView_026b8648);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar11 = in_d3;
  local_58 = dVar9;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (0.0 < in_d3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentHue_026b8948);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    in_d3 = in_d3 * dVar11;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    local_60 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueSliderView_026b8648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar7 = in_d2 / 2.0;
    dVar9 = local_60;
    local_b0 = in_d3;
    FUN_019051e4();
    local_90 = dVar7;
    dStack_88 = dVar9;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    if ((local_31 & 1) == 0) {
      dStack_f8 = dStack_88;
      local_100 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hueIndicator_026b88f8);
      _objc_retainAutoreleasedReturnValue();
      dStack_108 = dStack_f8;
      local_110 = local_100;
      in_d3 = local_100;
      in_d1 = dStack_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_01905e04;
      local_d0 = &DAT_02580e60;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = IVar5;
      dStack_b8 = dStack_88;
      local_c0 = local_90;
      in_d1 = 0.0;
      dVar11 = 0.5;
      in_d3 = dVar3;
      in_d2 = dVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000);
      _objc_storeStrong(&local_c8,0);
    }
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_139 = 0;
  bVar1 = false;
  dVar9 = in_d2;
  dVar7 = in_d2;
  local_130 = in_d3;
  local_128 = in_d1;
  local_120 = in_d2;
  local_118 = dVar11;
  if (0.0 < in_d2) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    dVar9 = dVar11;
    local_138 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 0.0 < dVar9;
    dVar11 = dVar9;
    local_160 = in_d2;
    local_158 = in_d1;
    local_150 = dVar7;
    local_148 = dVar9;
  }
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSaturation_026b8950);
    IVar5 = local_28;
    dVar8 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar9 = dVar9 * dVar7;
    local_188 = dVar8;
    local_180 = in_d1;
    local_178 = dVar7;
    local_170 = dVar11;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_168 = dVar9;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentBrightness_026b8958);
    dVar10 = 1.0 - dVar9;
    IVar5 = local_28;
    dVar8 = dVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saturationBrightnessView_026b8660);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar10 = dVar10 * dVar11;
    local_1b0 = dVar8;
    local_1a8 = dVar9;
    local_1a0 = dVar7;
    local_198 = dVar11;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    dVar9 = local_168;
    local_190 = dVar10;
    FUN_019051e4();
    IVar5 = local_28;
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_1c0 = dVar9;
    dStack_1b8 = dVar10;
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sbIndicator_026b8908);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,dVar10);
      (*(code *)PTR__objc_release_02578630)(IVar5);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = IVar5;
      dStack_1c8 = dStack_1b8;
      local_1d0 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar3,0,dVar2,0x3fe0000000000000,puVar4,
                 PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000);
      _objc_storeStrong(&local_1d8,0);
    }
  }
  return;
}

