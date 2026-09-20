// FUN_021baf2c @ 021baf2c

void FUN_021baf2c(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
  _swift_beginAccess(pbVar1,auStack_40,0x20,0);
  bVar2 = *pbVar1;
  _swift_endAccess(auStack_40);
  if ((bVar2 & 1) == 0) {
    uVar3 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("doubleTap",9,1);
    FUN_021bad3c();
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}

