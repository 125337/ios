// FUN_021b64c0 @ 021b64c0

void FUN_021b64c0(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_60;
  undefined1 auStack_40 [24];
  
  uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022237e0(uVar3,local_60);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_021b6634();
  uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02223100(uVar3,local_60,1);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222cc0(0,uVar3,local_60);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  lVar2 = WCRSuperFloatBallWindow::petPlayer;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  if (*plVar1 == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    (*(code *)PTR__objc_retain_02578638)(uVar3);
    _swift_endAccess(auStack_40);
    __s8WCRefine22WCRSuperFloatPetPlayerC5pauseyyF();
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  return;
}

