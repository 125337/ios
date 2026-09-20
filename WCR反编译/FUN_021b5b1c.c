// FUN_021b5b1c @ 021b5b1c

void FUN_021b5b1c(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = WCRSuperFloatBallWindow::petTapResetWorkItem;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petTapResetWorkItem);
  _swift_beginAccess(plVar1,auStack_48,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_48);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    _swift_retain(uVar3);
    _swift_endAccess(auStack_48);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(uVar3);
  }
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::petTapResetWorkItem);
  _swift_beginAccess(puVar2,auStack_60,0x21);
  uVar3 = *puVar2;
  *puVar2 = 0;
  _swift_release(uVar3);
  _swift_endAccess(auStack_60);
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar1,auStack_78,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_78);
  }
  else {
    lVar4 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)(lVar4);
    _swift_endAccess(auStack_78);
    __s8WCRefine22WCRSuperFloatPetPlayerC8setStateyyAC0G0OF(param_1);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  return;
}

