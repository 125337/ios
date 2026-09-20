// _$s8WCRefine23WCRSuperFloatBallWindowC17applySecureShieldyySbF @ 021aed9c

void __s8WCRefine23WCRSuperFloatBallWindowC17applySecureShieldyySbF(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::secureShieldOn);
  _swift_beginAccess(pbVar1,auStack_48,0x20,0);
  bVar2 = *pbVar1;
  _swift_endAccess(auStack_48);
  if ((bVar2 & 1) == (param_1 & 1)) {
    if ((param_1 & 1) != 0) {
      FUN_021aeeac(1);
    }
  }
  else {
    pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::secureShieldOn);
    _swift_beginAccess(pbVar1,auStack_60,0x21,0);
    *pbVar1 = param_1;
    _swift_endAccess(auStack_60);
    FUN_021aeeac(param_1 & 1);
  }
  return;
}

