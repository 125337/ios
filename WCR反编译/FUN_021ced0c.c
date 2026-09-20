// FUN_021ced0c @ 021ced0c

void FUN_021ced0c(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::highlightedIndex);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  *puVar1 = param_1;
  _swift_endAccess(auStack_38);
  return;
}

