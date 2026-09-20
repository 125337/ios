// FUN_021a13e0 @ 021a13e0

undefined8 FUN_021a13e0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(puVar1,auStack_30,0x20,0);
  uVar2 = *puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_30);
  return uVar2;
}

