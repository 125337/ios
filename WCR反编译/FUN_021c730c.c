// FUN_021c730c @ 021c730c

void FUN_021c730c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 auStack_30 [24];
  long local_18;
  
  lVar2 = WCRSuperFloatBallWindow::menuBackdropView;
  plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::menuBackdropView);
  local_18 = param_1;
  _swift_beginAccess(plVar1,auStack_30,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_30);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_30);
    FUN_02222cc0(0,uVar3,local_58);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  return;
}

