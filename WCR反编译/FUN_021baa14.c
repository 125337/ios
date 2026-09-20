// FUN_021baa14 @ 021baa14

void FUN_021baa14(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_40 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::menuExpanded);
  puVar3 = auStack_40;
  _swift_beginAccess(pbVar1,puVar3,0x20,0);
  bVar2 = *pbVar1;
  _swift_endAccess();
  if ((bVar2 & 1) == 0) {
    FUN_021b94c4();
    if (((ulong)puVar3 & 1) == 0) {
      FUN_021b6b48();
      FUN_021b5c98();
      FUN_021ad108();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_021ba1f8();
        if (puVar3 == (undefined1 *)0x0) {
          FUN_021bab7c();
        }
        else {
          uVar4 = 3;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("tap",3,1);
          FUN_021bad3c();
          _swift_bridgeObjectRelease(uVar4);
        }
      }
      else {
        FUN_021ba1f8();
        if (puVar3 == (undefined1 *)0x0) {
          FUN_021bab7c();
        }
        else {
          uVar4 = 3;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("tap",3,1);
          FUN_021bad3c();
          _swift_bridgeObjectRelease(uVar4);
        }
      }
    }
  }
  else {
    FUN_0219eddc(1,0);
  }
  return;
}

