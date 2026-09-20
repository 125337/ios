// FUN_021bab7c @ 021bab7c

void FUN_021bab7c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 local_d0;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [24];
  
  FUN_021bc6d8();
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar6 = *plVar1;
  _swift_endAccess(auStack_40);
  if (lVar6 == 1) {
    puVar2 = (ulong *)(unaff_x20 + WCRSuperFloatBallWindow::shortLineHitView);
    _swift_beginAccess(puVar2,auStack_68,0x20,0);
    uVar3 = *puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_68);
    if (uVar3 != 0) {
      uVar4 = uVar3;
      FUN_022228e0(uVar3,local_d0);
      if ((uVar4 & 1) == 0) {
        FUN_022220c0(uVar3,local_d0);
        FUN_021c1b5c(param_1,param_2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        return;
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
  }
  uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022220c0(uVar5,local_d0);
  local_50 = param_1;
  local_48 = param_2;
  (*(code *)PTR__objc_release_02578630)(uVar5);
  FUN_021c1b5c(param_1,param_2);
  return;
}

