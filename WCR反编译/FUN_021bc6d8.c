// FUN_021bc6d8 @ 021bc6d8

void FUN_021bc6d8(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  
  lVar3 = WCRSuperFloatBallWindow::snapAfterIdleWorkItem;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::snapAfterIdleWorkItem);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    _swift_retain(uVar4);
    _swift_endAccess(auStack_40);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(uVar4);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::snapAfterIdleWorkItem);
  _swift_beginAccess(puVar2,auStack_58,0x21,0);
  uVar4 = *puVar2;
  *puVar2 = 0;
  _swift_release(uVar4);
  _swift_endAccess(auStack_58);
  return;
}

