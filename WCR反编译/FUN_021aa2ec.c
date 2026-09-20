// FUN_021aa2ec @ 021aa2ec

void FUN_021aa2ec(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong local_200;
  ulong local_1f8;
  ulong local_1d0;
  ulong local_1c8;
  undefined8 *local_190;
  undefined8 local_168;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [24];
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  long local_70;
  ulong local_68;
  char *local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  undefined8 *local_30;
  
  local_30 = (undefined8 *)0x0;
  local_68 = 0;
  local_a0 = 0;
  local_f0 = 0.0;
  local_e8 = 0.0;
  puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  _objc_opt_self();
  FUN_02223780();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_021a2f80();
  uVar8 = *puVar3;
  uVar4 = puVar3[1];
  _swift_bridgeObjectRetain();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  puVar3 = puVar2;
  FUN_02222340(puVar2,local_168,uVar8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar3 == (undefined8 *)0x0) {
    local_190 = (undefined8 *)0x0;
  }
  else {
    local_190 = puVar3;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (puVar3,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,PTR___sSSSHsWP_02578940);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (local_190 != (undefined8 *)0x0) {
    local_30 = local_190;
    pcVar5 = "x";
    uVar4 = 1;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("x",1,1);
    local_60 = pcVar5;
    local_58 = uVar4;
    __sSDyq_Sgxcig(auStack_50,&local_60,local_190,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                   PTR___sSSSHsWP_02578940);
    FUN_021c7f98(&local_60);
    if (local_38 == 0) {
      FUN_021c7fc0(auStack_50);
      local_1d0 = 0;
    }
    else {
      uVar4 = 0;
      FUN_021c80bc(0);
      puVar6 = &local_148;
      _swift_dynamicCast(puVar6,auStack_50,PTR___sypN_02578b08 + 8,uVar4,6);
      if (((ulong)puVar6 & 1) == 0) {
        local_1c8 = 0;
      }
      else {
        local_1c8 = local_148;
      }
      local_1d0 = local_1c8;
    }
    if (local_1d0 == 0) {
      _swift_bridgeObjectRelease(local_190);
    }
    else {
      local_68 = local_1d0;
      pcVar5 = "y";
      uVar4 = 1;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("y",1,1);
      local_98 = pcVar5;
      local_90 = uVar4;
      __sSDyq_Sgxcig(auStack_88,&local_98,local_190,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                     PTR___sSSSHsWP_02578940);
      FUN_021c7f98(&local_98);
      if (local_70 == 0) {
        FUN_021c7fc0(auStack_88);
        local_200 = 0;
      }
      else {
        uVar4 = 0;
        FUN_021c80bc(0);
        puVar6 = &local_140;
        _swift_dynamicCast(puVar6,auStack_88,PTR___sypN_02578b08 + 8,uVar4,6);
        if (((ulong)puVar6 & 1) == 0) {
          local_1f8 = 0;
        }
        else {
          local_1f8 = local_140;
        }
        local_200 = local_1f8;
      }
      if (local_200 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
        _swift_bridgeObjectRelease(local_190);
      }
      else {
        local_a0 = local_200;
        uVar7 = local_1d0;
        FUN_02222360(local_1d0,local_168);
        __sSd8isFiniteSbvg();
        if ((uVar7 & 1) == 0) {
          (*(code *)PTR__objc_release_02578630)(local_200);
          (*(code *)PTR__objc_release_02578630)(local_1d0);
          _swift_bridgeObjectRelease(local_190);
        }
        else {
          uVar7 = local_200;
          FUN_02222360(local_200,local_168);
          __sSd8isFiniteSbvg();
          if ((uVar7 & 1) == 0) {
            (*(code *)PTR__objc_release_02578630)(local_200);
            (*(code *)PTR__objc_release_02578630)(local_1d0);
            _swift_bridgeObjectRelease(local_190);
          }
          else {
            FUN_02222360(local_1d0,local_168);
            dVar9 = param_1;
            (*(code *)PTR__objc_retain_02578638)(unaff_x20);
            FUN_02222060(unaff_x20,local_168);
            local_c0 = dVar9;
            local_b8 = param_2;
            local_b0 = param_3;
            local_a8 = param_4;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            FUN_021b0958(dVar9,param_2);
            param_1 = param_1 * dVar9;
            dVar11 = param_1;
            FUN_02222360(local_200,local_168);
            dVar10 = dVar11;
            (*(code *)PTR__objc_retain_02578638)(unaff_x20);
            FUN_02222060(unaff_x20,local_168);
            local_e0 = dVar10;
            local_d8 = dVar9;
            local_d0 = param_3;
            local_c8 = param_4;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            FUN_021b0994(dVar10,dVar9,param_3);
            dVar11 = dVar11 * dVar10;
            FUN_021bfe84();
            uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
            local_f0 = param_1;
            local_e8 = dVar11;
            (*(code *)PTR__objc_retain_02578638)();
            dVar9 = param_1;
            local_100 = param_1;
            local_f8 = dVar11;
            FUN_02222e40(uVar4,local_168);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_retain_02578638)(unaff_x20);
            FUN_02222060(unaff_x20,local_168);
            local_120 = dVar9;
            local_118 = dVar11;
            local_110 = dVar10;
            local_108 = param_4;
            (*(code *)PTR__objc_release_02578630)(unaff_x20);
            FUN_021b1f88(dVar9,dVar11,dVar10,param_4);
            lVar1 = unaff_x20 + WCRSuperFloatBallWindow::lastSideRight;
            _swift_beginAccess(lVar1,auStack_138,0x21,0);
            *(bool *)lVar1 = dVar9 <= param_1;
            _swift_endAccess(auStack_138);
            (*(code *)PTR__objc_release_02578630)(local_200);
            (*(code *)PTR__objc_release_02578630)(local_1d0);
            _swift_bridgeObjectRelease(local_190);
          }
        }
      }
    }
  }
  return;
}

