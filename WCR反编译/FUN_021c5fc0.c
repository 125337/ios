// FUN_021c5fc0 @ 021c5fc0

void FUN_021c5fc0(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 local_b8;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = 0;
  FUN_021c9a0c();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar3 = param_1;
  FUN_022237c0(param_1,local_b8);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar4 = &local_38;
  local_40 = 3;
  local_38 = uVar3;
  FUN_021c9aa0();
  __sSQ2eeoiySbx_xtFZTj(puVar4,&local_40,uVar2,uVar3);
  if (((ulong)puVar4 & 1) != 0) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
    _swift_beginAccess(plVar1,auStack_58,0x20,0);
    lVar5 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_58);
    if (lVar5 != 0) {
      (*(code *)PTR__objc_retain_02578638)(lVar5);
      FUN_022229a0(param_1,local_b8,lVar5);
      lVar6 = lVar5;
      (*(code *)PTR__objc_release_02578630)();
      __s8WCRefine24WCRSuperFloatFanMenuViewC13indexOfAction2atSiSo7CGPointV_tF();
      if (lVar6 < 0) {
        FUN_021c61b4();
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
      else {
        __s8WCRefine24WCRSuperFloatFanMenuViewC12selectAction2atSbSi_tF(lVar6);
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
    }
  }
  return;
}

