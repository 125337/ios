// FUN_021b0678 @ 021b0678

undefined8 FUN_021b0678(void)

{
  double *pdVar1;
  undefined1 *puVar2;
  long unaff_x20;
  double dVar3;
  double local_48;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0x4046000000000000;
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHeight);
  puVar2 = auStack_40;
  _swift_beginAccess(pdVar1,puVar2,0x20,0);
  dVar3 = *pdVar1;
  _swift_endAccess(puVar2);
  local_48 = dVar3 + 20.0;
  FUN_021c8058();
  __ss3maxyxx_xtSLRzlF
            (&local_20,&local_28,&local_48,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar2);
  return local_20;
}

