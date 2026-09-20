// FUN_021b0588 @ 021b0588

undefined8 FUN_021b0588(void)

{
  double *pdVar1;
  undefined1 *puVar2;
  long unaff_x20;
  double dVar3;
  double dVar4;
  double local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0x403c000000000000;
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineWidth);
  _swift_beginAccess();
  dVar3 = *pdVar1;
  _swift_endAccess(auStack_40);
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::edgeInset);
  puVar2 = auStack_58;
  _swift_beginAccess(pdVar1,puVar2,0x20,0);
  dVar4 = *pdVar1;
  _swift_endAccess(puVar2);
  local_60 = dVar3 + dVar4 + 3.0;
  FUN_021c8058();
  __ss3maxyxx_xtSLRzlF
            (&local_20,&local_28,&local_60,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2);
  return local_20;
}

