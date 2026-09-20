// FUN_021b09d0 @ 021b09d0

void FUN_021b09d0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  long *plVar1;
  double *pdVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double local_298;
  undefined8 local_288;
  undefined1 auStack_168 [24];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 auStack_118 [24];
  double local_100;
  undefined1 auStack_f8 [24];
  double local_e0;
  undefined1 auStack_d8 [24];
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  undefined1 auStack_70 [24];
  long local_58;
  undefined1 auStack_50 [24];
  
  local_58 = 0;
  local_78 = 0;
  uVar8 = 0;
  uStack_98 = 0;
  local_a0 = 0.0;
  uStack_88 = 0;
  local_90 = 0;
  local_e0 = 0.0;
  local_100 = 0.0;
  local_120 = 0.0;
  local_128 = 0.0;
  local_130 = 0.0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
  _swift_beginAccess(plVar1,auStack_50,0x20,0);
  lVar3 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
    local_58 = lVar3;
    _swift_beginAccess(plVar1,auStack_70,0x20,0);
    lVar4 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_70);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    else {
      local_78 = lVar4;
      FUN_021b0724(param_5 & 1);
      local_c0 = param_1;
      local_b8 = uVar8;
      local_b0 = param_3;
      local_a8 = param_4;
      local_a0 = param_1;
      uStack_98 = uVar8;
      local_90 = param_3;
      uStack_88 = param_4;
      FUN_022230c0(param_1,uVar8,param_3,param_4,lVar3,local_288);
      pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
      _swift_beginAccess();
      dVar6 = *pdVar2;
      _swift_endAccess(auStack_d8);
      pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHeight);
      local_e0 = dVar6;
      _swift_beginAccess(pdVar2,auStack_f8,0x20,0);
      dVar7 = *pdVar2;
      _swift_endAccess(auStack_f8);
      pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
      local_100 = dVar7;
      _swift_beginAccess(pdVar2,auStack_118,0x20,0);
      local_298 = *pdVar2;
      _swift_endAccess(auStack_118);
      local_120 = local_298;
      if ((param_5 & 1) != 0) {
        dVar9 = param_1;
        FUN_021b0958(param_1,uVar8,param_3,param_4);
        local_298 = (dVar9 - dVar6) - local_298;
      }
      local_128 = local_298;
      FUN_021b0994(param_1,uVar8,param_3,param_4);
      dVar9 = (param_1 - dVar7) * 0.5;
      local_150 = local_298;
      local_148 = dVar9;
      local_140 = dVar6;
      local_138 = dVar7;
      local_130 = dVar9;
      FUN_022230c0(lVar4,local_288);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatGradientLayer);
      _swift_beginAccess(plVar1,auStack_168,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_168);
      }
      else {
        lVar5 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_168);
        FUN_02222060(lVar4,local_288);
        FUN_022230c0(local_298,dVar9,dVar6,dVar7,lVar5,local_288);
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  return;
}

