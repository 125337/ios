// FUN_021f53c4 @ 021f53c4

void FUN_021f53c4(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_40 [24];
  
  lVar2 = WCRSuperFloatFanMenuView::onDismiss;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::onDismiss);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    pcVar3 = *(code **)(unaff_x20 + lVar2);
    uVar4 = ((undefined8 *)(unaff_x20 + lVar2))[1];
    _swift_retain(uVar4);
    _swift_endAccess(auStack_40);
    (*pcVar3)();
    _swift_release(uVar4);
  }
  return;
}

