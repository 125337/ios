// FUN_021bca90 @ 021bca90

void FUN_021bca90(undefined8 param_1,double param_2,double param_3,undefined8 param_4,uint param_5)

{
  byte *pbVar1;
  double *pdVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 local_1a8;
  double local_160;
  undefined1 auStack_f8 [24];
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 auStack_98 [24];
  double local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  byte local_48;
  
  local_48 = 0;
  local_80 = 0.0;
  local_a0 = 0.0;
  local_b0 = 0.0;
  local_a8 = 0.0;
  dVar4 = param_3;
  FUN_021b9908();
  local_48 = (byte)param_5 & 1;
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
  _swift_beginAccess(pbVar1,auStack_60,0x21);
  *pbVar1 = (byte)param_5 & 1;
  _swift_endAccess(auStack_60);
  pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
  _swift_beginAccess(pdVar2,auStack_78,0x20,0);
  local_160 = *pdVar2;
  _swift_endAccess(auStack_78);
  uVar5 = 0x3fe0000000000000;
  local_160 = local_160 * 0.5;
  local_80 = local_160;
  if ((param_5 & 1) == 0) {
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    _swift_beginAccess(pdVar2,auStack_98,0x20,0);
    dVar4 = *pdVar2;
    _swift_endAccess(auStack_98);
    local_160 = dVar4 + local_160;
  }
  else {
    dVar3 = local_160;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222060(unaff_x20,local_1a8);
    local_e0 = dVar3;
    local_d8 = uVar5;
    local_d0 = dVar4;
    local_c8 = param_4;
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    FUN_021b0958(dVar3,uVar5,dVar4,param_4);
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
    _swift_beginAccess(pdVar2,auStack_f8,0x20,0);
    dVar4 = *pdVar2;
    _swift_endAccess(auStack_f8);
    local_160 = (dVar3 - dVar4) - local_160;
  }
  local_a0 = local_160;
  param_2 = param_2 + param_3;
  local_b0 = local_160;
  local_a8 = param_2;
  FUN_021bfe84();
  local_b0 = local_160;
  uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  local_a8 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_160;
  local_b8 = param_2;
  FUN_02222e40(local_160,param_2,uVar5,local_1a8);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  FUN_021b09d0(param_2,param_5 & 1);
  return;
}

