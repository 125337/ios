// FUN_021ce998 @ 021ce998

undefined8 FUN_021ce998(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_30 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar1,auStack_30,0x20,0);
  uVar2 = *puVar1;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_30);
  return uVar2;
}

