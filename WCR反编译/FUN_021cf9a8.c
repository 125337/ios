// FUN_021cf9a8 @ 021cf9a8

void FUN_021cf9a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridCellSize);
  _swift_beginAccess(puVar1,auStack_40,0x21,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_endAccess(auStack_40);
  return;
}

