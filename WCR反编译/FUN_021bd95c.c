// FUN_021bd95c @ 021bd95c

void FUN_021bd95c(double param_1,double param_2,double param_3,double param_4)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 local_138;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  local_58 = 0.0;
  local_50 = 0.0;
  param_1 = param_1 + param_3;
  param_2 = param_2 + param_4;
  dVar8 = param_3;
  dVar9 = param_4;
  FUN_021bfe84();
  uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  local_58 = param_1;
  local_50 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  dVar6 = param_1;
  dVar7 = param_2;
  local_68 = param_1;
  local_60 = param_2;
  FUN_02222e40(uVar4,local_138);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_138);
  local_88 = dVar6;
  local_80 = dVar7;
  local_78 = dVar8;
  local_70 = dVar9;
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_021b1f88(dVar6,dVar7,dVar8,dVar9);
  lVar5 = unaff_x20 + WCRSuperFloatBallWindow::lastSideRight;
  _swift_beginAccess(lVar5,auStack_a0,0x21);
  *(bool *)lVar5 = dVar6 <= param_1;
  _swift_endAccess(auStack_a0);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_b8,0x20,0);
  lVar5 = *plVar1;
  _swift_endAccess(auStack_b8);
  if (lVar5 == 1) {
    pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::lastSideRight);
    _swift_beginAccess(pbVar2,auStack_d0,0x20,0);
    bVar3 = *pbVar2;
    _swift_endAccess(auStack_d0);
    FUN_021b09d0(param_2,bVar3 & 1);
  }
  FUN_021b7c9c();
  dVar6 = param_3;
  _hypot(param_3,param_4);
  if (8.0 < dVar6) {
    FUN_021c04f8(param_3,param_4);
  }
  return;
}

