// FUN_021b6f24 @ 021b6f24

void FUN_021b6f24(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 local_70;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  lVar3 = WCRSuperFloatBallWindow::quickChatOfficialBadge;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge);
  _swift_beginAccess(plVar1,auStack_30,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_30);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_30);
    FUN_02222b40(uVar4,local_70);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatOfficialBadge);
  _swift_beginAccess(puVar2,auStack_48,0x21,0);
  uVar4 = *puVar2;
  *puVar2 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _swift_endAccess(auStack_48);
  return;
}

