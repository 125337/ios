// FUN_021c62ac @ 021c62ac

void FUN_021c62ac(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 local_1e8;
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::dismissGeneration);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  lVar9 = *plVar1;
  _swift_endAccess(auStack_48);
  if (lVar9 == param_1) {
    pbVar2 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu);
    _swift_beginAccess(pbVar2,auStack_60,0x20,0);
    bVar5 = *pbVar2;
    _swift_endAccess(auStack_60);
    if ((bVar5 & 1) != 0) {
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog);
      _swift_beginAccess(puVar3,auStack_78,0x21);
      uVar6 = *puVar3;
      *puVar3 = 0;
      _swift_release(uVar6);
      _swift_endAccess(auStack_78);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(plVar1,auStack_90,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_90);
      }
      else {
        lVar7 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_90);
        lVar9 = lVar7;
        FUN_02222960(lVar7,local_1e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(lVar7);
        FUN_02222ae0(lVar9,local_1e8);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(plVar1,auStack_a8,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_a8);
      }
      else {
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_a8);
        FUN_02222b40(lVar9,local_1e8);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(puVar3,auStack_c0,0x21);
      uVar6 = *puVar3;
      *puVar3 = 0;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _swift_endAccess(auStack_c0);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::menuBackdropView);
      _swift_beginAccess(plVar1,auStack_d8,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_d8);
      }
      else {
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_d8);
        FUN_02222b40(lVar9,local_1e8);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      puVar3 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::menuBackdropView);
      _swift_beginAccess();
      uVar6 = *puVar3;
      *puVar3 = 0;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _swift_endAccess(auStack_f0);
      puVar4 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
      _swift_beginAccess(puVar4,auStack_108,0x21,0);
      *puVar4 = 0;
      _swift_endAccess(auStack_108);
      puVar4 = (undefined1 *)(unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu);
      _swift_beginAccess(puVar4,auStack_120,0x21,0);
      *puVar4 = 0;
      _swift_endAccess(auStack_120);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_022236a0(unaff_x20,local_1e8,1);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      uVar8 = 0;
      FUN_0219fbbc(0);
      local_130 = 0x3ff0000000000000;
      uVar6 = uVar8;
      FUN_0219fc50();
      __s5UIKit01_A23NumericRawRepresentablePAAE1soiyxx_0C5ValueQztFZ
                (&local_128,PTR__UIWindowLevelStatusBar_02578240,&local_130,uVar8,uVar6);
      FUN_022236e0(local_128,unaff_x20,local_1e8);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      uVar6 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
      _swift_beginAccess();
      lVar9 = *plVar1;
      _swift_endAccess(auStack_148);
      lVar9 = lVar9 + -2;
      FUN_02223100(lVar9,uVar6,local_1e8,lVar9 == 0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
      _swift_beginAccess(plVar1,auStack_160,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_160);
      }
      else {
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_160);
        FUN_02223100(lVar9,local_1e8,0);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
      _swift_beginAccess(plVar1,auStack_178,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_178);
      }
      else {
        lVar9 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_178);
        FUN_02223100(lVar9,local_1e8,0);
        (*(code *)PTR__objc_release_02578630)(lVar9);
      }
      FUN_021aa990();
    }
  }
  return;
}

