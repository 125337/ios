// FUN_021bcd84 @ 021bcd84

void FUN_021bcd84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  double dVar7;
  undefined8 uVar8;
  undefined8 local_108;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  FUN_021c0a6c();
  FUN_021b5b1c(0);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar6 = *plVar1;
  _swift_endAccess(auStack_40);
  if (lVar6 == 1) {
    FUN_021b998c(1);
  }
  else {
    pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::autoSnapEnabled);
    _swift_beginAccess(pbVar2,auStack_58,0x20,0);
    bVar4 = *pbVar2;
    _swift_endAccess(auStack_58);
    if ((bVar4 & 1) == 0) {
      FUN_021bc6d8();
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_022220c0(uVar5,local_108);
      dVar7 = param_1;
      local_68 = param_1;
      local_60 = param_2;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222060(unaff_x20,local_108);
      local_88 = dVar7;
      local_80 = param_2;
      local_78 = param_3;
      local_70 = param_4;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      FUN_021b1f88(dVar7,param_2,param_3,param_4);
      lVar6 = unaff_x20 + WCRSuperFloatBallWindow::lastSideRight;
      _swift_beginAccess(lVar6,auStack_a0,0x21);
      *(bool *)lVar6 = dVar7 <= param_1;
      _swift_endAccess(auStack_a0);
      uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballAlpha);
      _swift_beginAccess(puVar3,auStack_b8,0x20,0);
      uVar8 = *puVar3;
      _swift_endAccess(auStack_b8);
      FUN_02222cc0(uVar8,uVar5,local_108);
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    else {
      FUN_021bf8c4(1);
    }
  }
  return;
}

