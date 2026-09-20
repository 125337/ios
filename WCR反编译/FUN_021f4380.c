// FUN_021f4380 @ 021f4380

void FUN_021f4380(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + WCRSuperFloatFanMenuView::closeButton);
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222cc0(0,uVar2,local_70);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar3 = WCRSuperFloatFanMenuView::gridPanelView;
  plVar1 = (long *)(param_1 + WCRSuperFloatFanMenuView::gridPanelView);
  _swift_beginAccess(plVar1,auStack_30,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_30);
    FUN_02222cc0(0,uVar2,local_70);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  plVar1 = (long *)(param_1 + WCRSuperFloatFanMenuView::gridScrollView);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_48);
  }
  else {
    lVar3 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_48);
    FUN_02222cc0(0,lVar3,local_70);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  return;
}

