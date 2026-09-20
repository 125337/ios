// FUN_021a0fe4 @ 021a0fe4

void FUN_021a0fe4(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatUnread);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  *puVar1 = param_1;
  _swift_endAccess(auStack_38);
  return;
}

