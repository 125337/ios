// FUN_021b6b48 @ 021b6b48

/* WARNING: Removing unreachable block (ram,0x021b6bf0) */

void FUN_021b6b48(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long local_118;
  undefined8 local_108;
  uint local_c4;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  long local_78;
  long local_70;
  undefined1 auStack_68 [24];
  long local_50;
  long local_48;
  undefined1 auStack_40 [24];
  
  local_70 = 0;
  local_78 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar3 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  local_48 = 0;
  local_50 = lVar3;
  if (lVar3 == 0) {
    FUN_021c82dc(&local_50);
    local_c4 = 1;
  }
  else {
    FUN_021c830c(&local_50,&local_98);
    lVar3 = local_48;
    if (local_48 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
      FUN_021c8298(&local_50);
      local_c4 = 0;
    }
    else {
      __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
      uVar5 = local_98;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_98,lVar3);
      local_c4 = (uint)uVar5;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(local_98);
      FUN_021c82dc(&local_50);
    }
  }
  if ((local_c4 & 1) != 0) {
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::pausedAnimatedIcon);
    _swift_beginAccess(plVar1,auStack_68,0x20,0);
    lVar3 = *plVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_68);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      local_70 = lVar3;
      FUN_022225a0(lVar3,local_108);
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        local_118 = 0;
      }
      else {
        uVar5 = 0;
        FUN_021c8238(0);
        local_118 = lVar4;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(lVar4,uVar5);
        (*(code *)PTR__objc_release_02578630)(lVar4);
      }
      if (local_118 == 0) {
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      else {
        local_78 = local_118;
        uVar5 = 0;
        FUN_021c8238(0);
        lVar4 = local_118;
        __sSa5countSivg(local_118,uVar5);
        if (lVar4 < 2) {
          _swift_bridgeObjectRelease(1 - lVar4,local_118);
          (*(code *)PTR__objc_release_02578630)(lVar3);
        }
        else {
          uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_retain_02578638)(lVar3);
          FUN_02223120(uVar5,local_108,lVar3);
          (*(code *)PTR__objc_release_02578630)(lVar3);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
          (*(code *)PTR__objc_retain_02578638)();
          FUN_022237a0(uVar5,local_108);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::pausedAnimatedIcon);
          _swift_beginAccess(puVar2,auStack_90,0x21,0);
          uVar5 = *puVar2;
          *puVar2 = 0;
          (*(code *)PTR__objc_release_02578630)(uVar5);
          _swift_endAccess(auStack_90);
          _swift_bridgeObjectRelease(local_118);
          (*(code *)PTR__objc_release_02578630)(lVar3);
        }
      }
    }
  }
  return;
}

