// _$s8WCRefine23WCRSuperFloatBallWindowC27attachToActiveSceneIfNeededyyF @ 021a4538

/* WARNING: Removing unreachable block (ram,0x021a4c64) */
/* WARNING: Removing unreachable block (ram,0x021a4b24) */
/* WARNING: Removing unreachable block (ram,0x021a47e8) */
/* WARNING: Removing unreachable block (ram,0x021a4b90) */
/* WARNING: Removing unreachable block (ram,0x021a4c68) */

void __s8WCRefine23WCRSuperFloatBallWindowC27attachToActiveSceneIfNeededyyF(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong unaff_x20;
  uint local_1f0;
  ulong local_1c8;
  uint local_1bc;
  ulong local_1a0;
  uint local_188;
  uint local_17c;
  undefined8 local_140;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined1 local_c8;
  ulong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  long local_90;
  long local_88;
  long local_80;
  code *local_78;
  long local_70;
  long local_68;
  code *local_60;
  long local_58;
  long local_50;
  code *local_48;
  undefined *local_40;
  
  local_48 = (code *)0x0;
  local_80 = 0;
  local_88 = 0;
  puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
  _objc_opt_self();
  FUN_02223720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_02222180();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = 0;
  FUN_021c7878();
  uVar6 = uVar5;
  FUN_021c78d8();
  puVar7 = puVar4;
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(puVar4,uVar5,uVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = &DAT_028c6d10;
  local_40 = puVar7;
  FUN_021c77d4(&DAT_028c6d10,&DAT_0233a7e8);
  uVar5 = 0;
  FUN_021c79d8();
  uVar6 = uVar5;
  FUN_021c7a38();
  pcVar8 = FUN_021c7944;
  __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF(FUN_021c7944,0,puVar3,uVar5,uVar6);
  FUN_021c7b24(&local_40);
  puVar3 = &DAT_028c6d28;
  local_60 = pcVar8;
  local_48 = pcVar8;
  FUN_021c77d4(&DAT_028c6d28,&DAT_0233a7f0);
  puVar4 = puVar3;
  FUN_021c7c04();
  __sSTsE5first5where7ElementQzSgSbADKXE_tKF(&local_58,FUN_021c7b4c,0,puVar3,puVar4);
  local_68 = local_58;
  pcVar9 = pcVar8;
  _swift_bridgeObjectRetain(pcVar8);
  local_70 = local_68;
  if (local_68 == 0) {
    local_78 = pcVar8;
    FUN_021c7c78();
    __sSlsE5first7ElementQzSgvg(&local_50,puVar3,pcVar9);
    _swift_bridgeObjectRelease(pcVar8);
    if (local_70 != 0) {
      FUN_021c7cec(&local_70);
    }
  }
  else {
    _swift_bridgeObjectRelease(pcVar8);
    local_50 = local_70;
  }
  lVar2 = local_50;
  local_80 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  if (lVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(0);
    _swift_bridgeObjectRelease(pcVar8);
  }
  else {
    local_88 = lVar2;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    uVar10 = unaff_x20;
    FUN_02223b20(unaff_x20,local_140);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_90 = 0;
    if (uVar10 == 0) {
      FUN_021c7cec(local_98);
      local_17c = 1;
    }
    else {
      FUN_021c7e60(local_98,&local_e0);
      lVar1 = local_90;
      if (local_90 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
        FUN_021c7d1c(local_98);
        local_17c = 0;
      }
      else {
        uVar6 = local_e0;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_e0,local_90);
        local_17c = (uint)uVar6;
        (*(code *)PTR__objc_release_02578630)(lVar1);
        (*(code *)PTR__objc_release_02578630)(local_e0);
        FUN_021c7cec(local_98);
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    (*(code *)PTR__objc_retain_02578638)(lVar2);
    if ((local_17c & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      local_1a0 = unaff_x20;
      FUN_02223b20(unaff_x20,local_140);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      if (local_1a0 == 0) {
        local_1a0 = 0;
      }
      (*(code *)PTR__objc_retain_02578638)(lVar2);
      uVar10 = local_1a0;
      __ss3neeoiySbyXlSg_ABtF(local_1a0,lVar2);
      _swift_unknownObjectRelease(lVar2);
      _swift_unknownObjectRelease(local_1a0);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      if ((uVar10 & 1) == 0) {
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        local_1bc = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        uVar10 = unaff_x20;
        FUN_02223b20(unaff_x20,local_140);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
        if (uVar10 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          FUN_021c7cec(local_a0);
          local_1c8 = uVar10;
          FUN_02221d80(uVar10,local_140);
          (*(code *)PTR__objc_release_02578630)(uVar10);
        }
        else {
          FUN_021c7cec(local_a0);
          local_1c8 = 0;
        }
        local_b8 = uVar10 == 0;
        local_c0 = local_1c8;
        local_b0 = 0;
        local_a8 = 0;
        if ((bool)local_b8) {
          local_1f0 = 0;
        }
        else {
          local_d0 = local_1c8;
          local_d8 = 0;
          uVar5 = 0;
          local_c8 = local_b8;
          FUN_021c7d60();
          uVar6 = uVar5;
          FUN_021c7df4();
          puVar11 = &local_d0;
          __sSQ2eeoiySbx_xtFZTj(puVar11,&local_d8,uVar5,uVar6);
          local_1f0 = (uint)puVar11;
        }
        local_1bc = local_1f0 ^ 1;
        (*(code *)PTR__objc_release_02578630)(unaff_x20);
      }
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_188 = local_1bc;
    }
    else {
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_188 = 1;
    }
    if ((local_188 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      (*(code *)PTR__objc_retain_02578638)(lVar2);
      FUN_02223700(unaff_x20,local_140,lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _swift_bridgeObjectRelease(pcVar8);
  }
  return;
}

