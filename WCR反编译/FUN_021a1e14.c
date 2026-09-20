// FUN_021a1e14 @ 021a1e14

void FUN_021a1e14(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  *puVar1 = param_1;
  _swift_endAccess(auStack_38);
  return;
}

