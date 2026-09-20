// FUN_021c6acc @ 021c6acc

void FUN_021c6acc(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_228;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long local_60;
  undefined1 auStack_58 [24];
  code *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_60 = 0;
  param_1 = param_1 + 0x10;
  local_40 = param_3;
  local_38 = param_4;
  local_30 = param_2;
  local_28 = param_1;
  _swift_beginAccess(param_1,auStack_58,0x20,0);
  _swift_unknownObjectWeakLoadStrong();
  _swift_endAccess(auStack_58);
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::dismissGeneration);
    local_60 = param_1;
    _swift_beginAccess(plVar1,auStack_78,0x20,0);
    lVar6 = *plVar1;
    _swift_endAccess(auStack_78);
    if (lVar6 == param_2) {
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::dismissWatchdog);
      _swift_beginAccess(plVar1,auStack_90,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_90);
      }
      else {
        lVar6 = *plVar1;
        _swift_retain(lVar6);
        _swift_endAccess(auStack_90);
        __s8Dispatch0A8WorkItemC6cancelyyFTj();
        _swift_release(lVar6);
      }
      puVar2 = (undefined8 *)(param_1 + WCRSuperFloatBallWindow::dismissWatchdog);
      _swift_beginAccess(puVar2,auStack_a8,0x21);
      uVar4 = *puVar2;
      *puVar2 = 0;
      _swift_release(uVar4);
      _swift_endAccess(auStack_a8);
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(plVar1,auStack_c0,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_c0);
      }
      else {
        lVar6 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_c0);
        FUN_02222b40(lVar6,local_228);
        (*(code *)PTR__objc_release_02578630)(lVar6);
      }
      puVar2 = (undefined8 *)(param_1 + WCRSuperFloatBallWindow::fanMenu);
      _swift_beginAccess(puVar2,auStack_d8,0x21);
      uVar4 = *puVar2;
      *puVar2 = 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _swift_endAccess(auStack_d8);
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::menuBackdropView);
      _swift_beginAccess(plVar1,auStack_f0,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_f0);
      }
      else {
        lVar6 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_f0);
        FUN_02222b40(lVar6,local_228);
        (*(code *)PTR__objc_release_02578630)(lVar6);
      }
      puVar2 = (undefined8 *)(param_1 + WCRSuperFloatBallWindow::menuBackdropView);
      _swift_beginAccess();
      uVar4 = *puVar2;
      *puVar2 = 0;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      _swift_endAccess(auStack_108);
      puVar3 = (undefined1 *)(param_1 + WCRSuperFloatBallWindow::menuExpanded);
      _swift_beginAccess(puVar3,auStack_120,0x21,0);
      *puVar3 = 0;
      _swift_endAccess(auStack_120);
      puVar3 = (undefined1 *)(param_1 + WCRSuperFloatBallWindow::isDismissingMenu);
      _swift_beginAccess(puVar3,auStack_138,0x21,0);
      *puVar3 = 0;
      _swift_endAccess(auStack_138);
      (*(code *)PTR__objc_retain_02578638)(param_1);
      FUN_022236a0(param_1,local_228,1);
      (*(code *)PTR__objc_release_02578630)(param_1);
      (*(code *)PTR__objc_retain_02578638)(param_1);
      uVar5 = 0;
      FUN_0219fbbc(0);
      local_148 = 0x3ff0000000000000;
      uVar4 = uVar5;
      FUN_0219fc50();
      __s5UIKit01_A23NumericRawRepresentablePAAE1soiyxx_0C5ValueQztFZ
                (&local_140,PTR__UIWindowLevelStatusBar_02578240,&local_148,uVar5,uVar4);
      FUN_022236e0(local_140,param_1,local_228);
      (*(code *)PTR__objc_release_02578630)(param_1);
      uVar4 = *(undefined8 *)(param_1 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::triggerMode);
      _swift_beginAccess();
      lVar6 = *plVar1;
      _swift_endAccess(auStack_160);
      lVar6 = lVar6 + -2;
      FUN_02223100(lVar6,uVar4,local_228,lVar6 == 0);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::shortLineHitView);
      _swift_beginAccess(plVar1,auStack_178,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_178);
      }
      else {
        lVar6 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_178);
        FUN_02223100(lVar6,local_228,0);
        (*(code *)PTR__objc_release_02578630)(lVar6);
      }
      plVar1 = (long *)(param_1 + WCRSuperFloatBallWindow::shortLineView);
      _swift_beginAccess(plVar1,auStack_190,0x20,0);
      if (*plVar1 == 0) {
        _swift_endAccess(auStack_190);
      }
      else {
        lVar6 = *plVar1;
        (*(code *)PTR__objc_retain_02578638)();
        _swift_endAccess(auStack_190);
        FUN_02223100(lVar6,local_228,0);
        (*(code *)PTR__objc_release_02578630)(lVar6);
      }
      FUN_021aa990();
      FUN_0219fb8c(param_3,param_4);
      if (param_3 != (code *)0x0) {
        (*param_3)();
        _swift_release(param_4);
      }
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(param_1);
    }
  }
  return;
}

