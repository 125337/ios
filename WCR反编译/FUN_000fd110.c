// FUN_000fd110 @ 000fd110

undefined1  [16]
FUN_000fd110(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  double dVar7;
  double local_278;
  double local_270;
  double local_268;
  double local_258;
  double local_250;
  double local_248;
  double local_d0;
  double dStack_c8;
  ulong local_38;
  double local_30;
  double dStack_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  pcVar3 = "MMEdgeTipsView";
  _objc_getClass();
  pcVar4 = "FirstUnReadTipView";
  _objc_getClass();
  if ((pcVar3 == (char *)0x0) ||
     (uVar5 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,pcVar3),
     (uVar5 & 1) == 0)) {
    bVar1 = false;
    local_d0 = param_3;
    dStack_c8 = param_4;
    if (pcVar4 == (char *)0x0) goto LAB_000fd2bc;
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,pcVar4);
    bVar1 = false;
    local_d0 = param_3;
    dStack_c8 = param_4;
    if ((uVar5 & 1) == 0) goto LAB_000fd2bc;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  dVar7 = 1.0;
  bVar1 = false;
  local_d0 = param_2;
  dStack_c8 = param_1;
  if (1.0 < param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    bVar1 = 1.0 < param_1;
    local_d0 = dVar7;
    dStack_c8 = param_3;
  }
LAB_000fd2bc:
  uVar5 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    local_30 = local_d0;
    dStack_28 = dStack_c8;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sizeToFit_0269ec08);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    uVar5 = local_38;
    if ((local_d0 < 1.0) || (dStack_c8 < 1.0)) {
      local_d0 = 200.0;
      dStack_c8 = 44.0;
      FUN_000fd0e4();
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_sizeThatFits__0269ec10);
    }
    if (local_d0 <= 1.0) {
      local_248 = 120.0;
    }
    else {
      local_248 = local_d0;
    }
    if (200.0 <= local_248) {
      local_250 = 200.0;
    }
    else {
      local_250 = local_248;
    }
    if (local_250 <= 96.0) {
      local_258 = 96.0;
    }
    else {
      local_258 = local_250;
    }
    if (dStack_c8 <= 1.0) {
      local_268 = 40.0;
    }
    else {
      local_268 = dStack_c8;
    }
    if (44.0 <= local_268) {
      local_270 = 44.0;
    }
    else {
      local_270 = local_268;
    }
    if (local_270 <= 34.0) {
      local_278 = 34.0;
    }
    else {
      local_278 = local_270;
    }
    FUN_000fd0e4();
    local_30 = local_258;
    dStack_28 = local_278;
  }
  _objc_storeStrong(&local_38,0);
  auVar2._8_8_ = dStack_28;
  auVar2._0_8_ = local_30;
  return auVar2;
}

