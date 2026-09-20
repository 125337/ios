// FUN_021c3fcc @ 021c3fcc

void FUN_021c3fcc(undefined8 param_1,undefined8 param_2,long param_3,byte param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  byte local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = param_4 & 1;
  uVar3 = *(undefined8 *)(param_3 + WCRSuperFloatBallWindow::ballContainer);
  local_38 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = param_1;
  local_48 = param_2;
  FUN_02222e40(param_1,param_2,uVar3,local_f8);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  FUN_021b7c9c();
  plVar1 = (long *)(param_3 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_68,0x20,0);
  lVar4 = *plVar1;
  _swift_endAccess(auStack_68);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)(param_3 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = (undefined8 *)(param_3 + WCRSuperFloatBallWindow::ballIdleAlpha);
    _swift_beginAccess(puVar2,auStack_c8,0x20,0);
    uVar5 = *puVar2;
    _swift_endAccess(auStack_c8);
    FUN_02222cc0(uVar5,uVar3,local_f8);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  else {
    plVar1 = (long *)(param_3 + WCRSuperFloatBallWindow::triggerMode);
    _swift_beginAccess(plVar1,auStack_80,0x20,0);
    lVar4 = *plVar1;
    _swift_endAccess(auStack_80);
    if (lVar4 == 1) {
      uVar3 = *(undefined8 *)(param_3 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222cc0(DAT_02323db0,uVar3,local_f8);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      plVar1 = (long *)(param_3 + WCRSuperFloatBallWindow::shortLineView);
      _swift_beginAccess(plVar1,auStack_98,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_98);
      }
      else {
        lVar4 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_98);
        puVar2 = (undefined8 *)(param_3 + WCRSuperFloatBallWindow::ballIdleAlpha);
        _swift_beginAccess(puVar2,auStack_b0,0x20,0);
        uVar3 = *puVar2;
        _swift_endAccess(auStack_b0);
        FUN_02222cc0(uVar3,lVar4,local_f8);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      FUN_021b09d0(param_2,param_4 & 1);
    }
  }
  return;
}

