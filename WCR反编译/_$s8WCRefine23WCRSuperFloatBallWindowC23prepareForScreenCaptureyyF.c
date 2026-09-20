// _$s8WCRefine23WCRSuperFloatBallWindowC23prepareForScreenCaptureyyF @ 021ae568

void __s8WCRefine23WCRSuperFloatBallWindowC23prepareForScreenCaptureyyF(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 local_80;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  FUN_0219eddc(0,0);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02223100(unaff_x20,local_80,1);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222cc0(0,unaff_x20,local_80);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  uVar2 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02223100(uVar2,local_80,1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar3 = WCRSuperFloatBallWindow::shortLineView;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + lVar3);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_40);
    FUN_02223100(uVar2,local_80,1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
  _swift_beginAccess(plVar1,auStack_58,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_58);
  }
  else {
    lVar3 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_58);
    FUN_02223100(lVar3,local_80,1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  return;
}

