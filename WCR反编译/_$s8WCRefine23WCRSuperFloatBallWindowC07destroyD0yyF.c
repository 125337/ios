// _$s8WCRefine23WCRSuperFloatBallWindowC07destroyD0yyF @ 0219e8e0

void __s8WCRefine23WCRSuperFloatBallWindowC07destroyD0yyF(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 local_1b0;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  FUN_0219eddc(0,0);
  FUN_0219f880();
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::onActionSelected);
  _swift_beginAccess();
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_0219fae8(uVar4,uVar5);
  _swift_endAccess(auStack_40);
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::onGestureActionId);
  _swift_beginAccess(puVar1,auStack_58,0x21,0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_0219fb18(uVar4,uVar5);
  _swift_endAccess(auStack_58);
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::onQuickChatOpenUsername);
  _swift_beginAccess(puVar1,auStack_70,0x21,0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_0219fb18(uVar4,uVar5);
  _swift_endAccess(auStack_70);
  lVar6 = WCRSuperFloatBallWindow::secureCanvas;
  plVar2 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
  _swift_beginAccess(plVar2,auStack_88,0x20,0);
  if (*plVar2 == 0) {
    _swift_endAccess(auStack_88);
  }
  else {
    uVar4 = *(undefined8 *)((long)unaff_x20 + lVar6);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_88);
    FUN_02222b40(uVar4,local_1b0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
  _swift_beginAccess();
  uVar4 = *puVar1;
  *puVar1 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_a0);
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::secureField);
  _swift_beginAccess(puVar1,auStack_b8,0x21,0);
  uVar4 = *puVar1;
  *puVar1 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_b8);
  puVar3 = (undefined1 *)((long)unaff_x20 + WCRSuperFloatBallWindow::secureShieldOn);
  _swift_beginAccess(puVar3,auStack_d0,0x21,0);
  *puVar3 = 0;
  _swift_endAccess(auStack_d0);
  puVar3 = (undefined1 *)((long)unaff_x20 + WCRSuperFloatBallWindow::previewTouchYield);
  _swift_beginAccess(puVar3,auStack_e8,0x21,0);
  *puVar3 = 0;
  _swift_endAccess(auStack_e8);
  plVar2 = (long *)((long)unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog);
  _swift_beginAccess(plVar2,auStack_100,0x20,0);
  if (*plVar2 == 0) {
    _swift_endAccess(auStack_100);
  }
  else {
    lVar6 = *plVar2;
    _swift_retain(lVar6);
    _swift_endAccess(auStack_100);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar6);
  }
  puVar1 = (undefined8 *)((long)unaff_x20 + WCRSuperFloatBallWindow::dismissWatchdog);
  _swift_beginAccess();
  uVar4 = *puVar1;
  *puVar1 = 0;
  _swift_release(uVar4);
  _swift_endAccess(auStack_118);
  puVar3 = (undefined1 *)((long)unaff_x20 + WCRSuperFloatBallWindow::isDismissingMenu);
  _swift_beginAccess(puVar3,auStack_130,0x21,0);
  *puVar3 = 0;
  _swift_endAccess(auStack_130);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_022236a0(unaff_x20,local_1b0,1);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02223100(unaff_x20,local_1b0,1);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222cc0(0,unaff_x20,local_1b0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_022233c0(unaff_x20,local_1b0,0);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02223700(unaff_x20,local_1b0,0);
  (*(code *)PTR__objc_release_02578630)();
  FUN_0219e50c();
  _swift_beginAccess();
  uVar4 = *unaff_x20;
  *unaff_x20 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_148);
  return;
}

