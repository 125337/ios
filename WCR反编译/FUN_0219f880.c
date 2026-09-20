// FUN_0219f880 @ 0219f880

void FUN_0219f880(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_a0;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  lVar4 = WCRSuperFloatBallWindow::quickChatGradientLayer;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatGradientLayer);
  _swift_beginAccess(plVar1,auStack_30,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_30);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_30);
    FUN_02222ae0(uVar3,local_a0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatGradientLayer);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_48);
  }
  else {
    lVar4 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_48);
    FUN_02222b20(lVar4,local_a0);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatGradientLayer);
  _swift_beginAccess(puVar2,auStack_60,0x21);
  uVar3 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _swift_endAccess(auStack_60);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineView);
  _swift_beginAccess(plVar1,auStack_78,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    lVar4 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_78);
    uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = uVar5;
    FUN_02221fa0(uVar5,local_a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    FUN_02222d60(lVar4,local_a0,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  return;
}

