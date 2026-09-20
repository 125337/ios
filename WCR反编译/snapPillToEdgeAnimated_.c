// snapPillToEdgeAnimated: @ 00fda7e0

/* Function Stack Size: 0x14 bytes */

void WCRIconNameCaptureFloatWindow::snapPillToEdgeAnimated_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double in_d2;
  double in_d3;
  double local_1b8;
  double local_1b0;
  double local_198;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  ID local_140;
  double local_138;
  double local_130;
  undefined **local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_104;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined1 local_b1;
  undefined8 local_a8;
  double local_90;
  byte local_81;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_50;
  double local_48;
  double local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHidden__026ca970,0);
  uVar6 = DAT_0232c680;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWindowLevel__026caae8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  uVar5 = 0x3ff0000000000000;
  local_81 = 0;
  dVar7 = in_d2;
  local_78 = uVar6;
  if (in_d2 <= 1.0) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
  }
  local_50 = uVar5;
  local_48 = dVar7;
  local_40 = in_d3;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = uVar5;
  _CGRectGetWidth(in_d2,uVar5,dVar7,in_d3);
  uVar6 = 0x3fe0000000000000;
  in_d2 = in_d2 * 0.5;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  local_90 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = in_d2 < local_48 * 0.5;
  local_c8 = in_d2;
  local_c0 = uVar6;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_d0 = DAT_02323f38;
  if (bVar1) {
    local_198 = local_90 * DAT_02323f38;
  }
  else {
    local_198 = local_48 - DAT_02323f38 * local_90;
  }
  local_d8 = local_198;
  IVar3 = local_28;
  dVar7 = DAT_02323f38;
  local_b1 = bVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_100 = local_198;
  local_f8 = dVar7;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_104 = 0x50;
  local_1b0 = dVar7;
  if (dVar7 < 80.0) {
    local_1b0 = 80.0;
  }
  local_110 = local_1b0;
  local_e8 = local_1b0;
  local_118 = local_40 - 80.0;
  local_1b8 = local_118;
  if (local_1b0 < local_118) {
    local_1b8 = local_1b0;
  }
  local_120 = local_1b8;
  local_e0 = local_1b8;
  local_f0 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPillDocked__026ad2a0,1);
  IVar3 = local_28;
  ppuVar4 = &local_160;
  local_160 = PTR___NSConcreteStackBlock_02578660;
  local_158 = 0xc2000000;
  local_154 = 0;
  local_150 = FUN_00fdacbc;
  local_148 = &DAT_02580e60;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = IVar3;
  local_138 = local_d8;
  local_130 = local_e0;
  _objc_retainBlock();
  local_128 = ppuVar4;
  if ((local_31 & 1) == 0) {
    (*(code *)ppuVar4[2])();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fd6666666666666,0,DAT_0232c678,DAT_02324020,PTR__OBJC_CLASS___UIView_026cdfd8,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,0,ppuVar4,0);
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_140,0);
  return;
}

