// FUN_021a3a44 @ 021a3a44

long FUN_021a3a44(void)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::secureShieldOn);
  _swift_beginAccess(pbVar1,auStack_30,0x20,0);
  bVar3 = *pbVar1;
  _swift_endAccess(auStack_30);
  if ((bVar3 & 1) != 0) {
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::secureCanvas);
    _swift_beginAccess(plVar2,auStack_48,0x20,0);
    lVar4 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_48);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  return unaff_x20;
}

