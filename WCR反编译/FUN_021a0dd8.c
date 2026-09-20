// FUN_021a0dd8 @ 021a0dd8

byte FUN_021a0dd8(void)

{
  byte *pbVar1;
  byte bVar2;
  long unaff_x20;
  undefined1 auStack_30 [24];
  
  pbVar1 = (byte *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatShowBadge);
  _swift_beginAccess(pbVar1,auStack_30,0x20,0);
  bVar2 = *pbVar1;
  _swift_endAccess(auStack_30);
  return bVar2 & 1;
}

