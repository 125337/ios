// FUN_021a154c @ 021a154c

void FUN_021a154c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_retain();
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::petTapResetWorkItem);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  _swift_release(uVar2);
  _swift_endAccess(auStack_38);
  _swift_release(param_1);
  return;
}

