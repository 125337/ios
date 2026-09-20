// FUN_021b6634 @ 021b6634

/* WARNING: Removing unreachable block (ram,0x021b66dc) */

void FUN_021b6634(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long local_108;
  undefined8 local_e0;
  uint local_bc;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined1 auStack_78 [24];
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined1 auStack_40 [24];
  
  local_58 = 0;
  local_60 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::petPlayer);
  _swift_beginAccess(plVar1,auStack_40,0x20,0);
  lVar2 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_40);
  local_48 = 0;
  local_50 = lVar2;
  if (lVar2 == 0) {
    FUN_021c82dc(&local_50);
    local_bc = 1;
  }
  else {
    FUN_021c830c(&local_50,&local_90);
    lVar2 = local_48;
    if (local_48 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
      FUN_021c8298(&local_50);
      local_bc = 0;
    }
    else {
      __s8WCRefine22WCRSuperFloatPetPlayerCMa(0);
      uVar4 = local_90;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_90,lVar2);
      local_bc = (uint)uVar4;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(local_90);
      FUN_021c82dc(&local_50);
    }
  }
  if ((local_bc & 1) != 0) {
    lVar3 = *(long *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = lVar3;
    FUN_02222520(lVar3,local_e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (lVar2 != 0) {
      lVar3 = lVar2;
      local_58 = lVar2;
      FUN_022225a0(lVar2,local_e0);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        local_108 = 0;
      }
      else {
        uVar4 = 0;
        FUN_021c8238(0);
        local_108 = lVar3;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(lVar3,uVar4);
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      if (local_108 == 0) {
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      else {
        local_60 = local_108;
        uVar4 = 0;
        FUN_021c8238(0);
        lVar3 = local_108;
        __sSa5countSivg(local_108,uVar4);
        if (lVar3 < 2) {
          _swift_bridgeObjectRelease(1 - lVar3,local_108);
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)(lVar2);
          plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::pausedAnimatedIcon);
          _swift_beginAccess(plVar1,auStack_78,0x21,0);
          lVar3 = *plVar1;
          *plVar1 = lVar2;
          (*(code *)PTR__objc_release_02578630)(lVar3);
          _swift_endAccess(auStack_78);
          uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
          (*(code *)PTR__objc_retain_02578638)();
          FUN_022237e0(uVar4,local_e0);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
          (*(code *)PTR__objc_retain_02578638)();
          local_80 = local_108;
          puVar5 = &DAT_028c6e10;
          FUN_021c77d4(&DAT_028c6e10,&DAT_0233b1d0);
          puVar6 = puVar5;
          FUN_021c94e4();
          __sSlsE5first7ElementQzSgvg(&local_88,puVar5,puVar6);
          FUN_02223120(uVar4,local_e0);
          (*(code *)PTR__objc_release_02578630)(local_88);
          (*(code *)PTR__objc_release_02578630)(uVar4);
          _swift_bridgeObjectRelease(local_108);
          (*(code *)PTR__objc_release_02578630)(lVar2);
        }
      }
    }
  }
  return;
}

