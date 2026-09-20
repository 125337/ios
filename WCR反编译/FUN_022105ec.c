// FUN_022105ec @ 022105ec

/* WARNING: Removing unreachable block (ram,0x022113f0) */
/* WARNING: Removing unreachable block (ram,0x02210f08) */

code * FUN_022105ec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char **ppcVar5;
  char **ppcVar6;
  char **ppcVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  code *local_6a8;
  undefined8 local_528;
  long local_520;
  undefined8 local_518;
  long local_510;
  undefined8 local_4e8;
  long local_4e0;
  undefined8 local_4d8;
  long local_4d0;
  undefined8 *local_478;
  undefined8 *local_470;
  long local_410;
  long local_408;
  undefined8 local_3e0;
  undefined1 auStack_350 [32];
  long local_330;
  undefined8 *local_328;
  undefined8 local_320;
  long local_318;
  undefined8 local_310;
  long local_308;
  undefined1 auStack_300 [32];
  undefined8 local_2e0;
  long lStack_2d8;
  undefined8 local_2c8;
  long lStack_2c0;
  undefined8 local_2b8;
  long local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  long local_270;
  undefined8 local_268;
  long local_260;
  char *local_258;
  undefined8 local_250;
  undefined1 auStack_248 [24];
  long local_230;
  undefined8 local_228;
  long local_220;
  char *local_218;
  undefined8 local_210;
  undefined1 auStack_208 [24];
  long local_1f0;
  long local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [24];
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long lStack_148;
  char *local_140;
  undefined8 local_138;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  char **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char **local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  long lStack_78;
  char *local_70;
  long lStack_68;
  char *local_60;
  long local_58;
  undefined8 local_50;
  char *local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_a0 = (char **)0x0;
  local_98 = (undefined *)0x0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_100 = (char **)0x0;
  local_168 = 0;
  local_178 = 0;
  local_170 = 0;
  local_190 = 0;
  local_1c8 = (undefined8 *)0x0;
  local_1d0 = (undefined8 *)0x0;
  local_228 = 0;
  local_220 = 0;
  local_268 = 0;
  local_260 = 0;
  local_278 = 0;
  local_270 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  FUN_02211c58();
  FUN_02219574();
  uVar1 = 5;
  _NSSearchPathForDirectoriesInDomains(5,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar1;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = &DAT_028c7238;
  local_50 = uVar15;
  FUN_021c77d4(&DAT_028c7238,&DAT_0233b1c0);
  puVar3 = puVar2;
  FUN_021fbd3c();
  __sSlsE5first7ElementQzSgvg(&local_60,puVar2,puVar3);
  _swift_bridgeObjectRelease(uVar15);
  local_70 = local_60;
  lStack_68 = local_58;
  lStack_78 = local_58;
  local_80 = local_60;
  if (local_58 == 0) {
    pcVar4 = "";
    lVar14 = 0;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
    local_48 = pcVar4;
    local_40 = lVar14;
    if (lStack_78 != 0) {
      FUN_021c811c(&local_80);
    }
  }
  else {
    local_48 = local_60;
    local_40 = local_58;
  }
  pcVar4 = "/Preferences/com.qimiao.WCRefine.plist";
  uVar15 = 0x26;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("/Preferences/com.qimiao.WCRefine.plist",0x26,1);
  local_90 = pcVar4;
  local_88 = uVar15;
  FUN_021c81a4();
  ppcVar5 = &local_90;
  puVar2 = PTR___sSSN_02578938;
  __sSy10FoundationE9appendingySSqd__SyRd__lF();
  FUN_021c7f98(&local_90);
  FUN_021c7f98(&local_48);
  local_a0 = ppcVar5;
  local_98 = puVar2;
  FUN_021c9d78(0);
  _swift_bridgeObjectRetain(puVar2);
  FUN_02211db8(ppcVar5,puVar2);
  if (ppcVar5 != (char **)0x0) {
    pcVar4 = "voiceInputBreathingLightPaletteOverrides";
    uVar15 = 0x28;
    local_100 = ppcVar5;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("voiceInputBreathingLightPaletteOverrides",0x28,1);
    ppcVar6 = &local_140;
    local_128 = PTR___sSSN_02578938;
    local_140 = pcVar4;
    local_138 = uVar15;
    FUN_021cdd90();
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    ppcVar7 = ppcVar5;
    FUN_02221d60(ppcVar5,local_3e0);
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(ppcVar6);
    if (ppcVar7 == (char **)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      lStack_148 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF();
      _swift_unknownObjectRelease(ppcVar7);
      FUN_021e29f0(auStack_350,&local_160);
    }
    uStack_118 = uStack_158;
    local_120 = local_160;
    lStack_108 = lStack_148;
    local_110 = local_150;
    if (lStack_148 == 0) {
      FUN_021c7ff8(&local_140);
      FUN_021c7fc0(&local_120);
      local_410 = 0;
    }
    else {
      puVar3 = &DAT_028c7558;
      FUN_021c77d4(&DAT_028c7558,&DAT_0233bda8);
      plVar8 = &local_330;
      _swift_dynamicCast(plVar8,&local_120,PTR___sypN_02578b08 + 8,puVar3,6);
      if (((ulong)plVar8 & 1) == 0) {
        local_408 = 0;
      }
      else {
        local_408 = local_330;
      }
      FUN_021c7ff8(&local_140);
      local_410 = local_408;
    }
    if (local_410 == 0) {
      (*(code *)PTR__objc_release_02578630)(ppcVar5);
    }
    else {
      local_168 = local_410;
      _swift_bridgeObjectRetain();
      local_180 = local_410;
      puVar3 = &DAT_028c7558;
      FUN_021c77d4(&DAT_028c7558,&DAT_0233bda8);
      puVar9 = puVar3;
      FUN_02219644();
      __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_178,puVar3,puVar9);
      while( true ) {
        FUN_021c77d4(&DAT_028c7568,&DAT_0233bdb0);
        __ss16IndexingIteratorV4next7ElementQzSgyF(&local_188);
        lVar14 = local_188;
        if (local_188 == 0) break;
        local_190 = local_188;
        pcVar4 = "index";
        uVar15 = 5;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("index",5,1);
        local_1c0 = pcVar4;
        local_1b8 = uVar15;
        __sSDyq_Sgxcig(auStack_1b0,&local_1c0,lVar14,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                       PTR___sSSSHsWP_02578940);
        FUN_021c7f98(&local_1c0);
        if (local_198 == 0) {
          FUN_021c7fc0(auStack_1b0);
          local_478 = (undefined8 *)0x0;
        }
        else {
          uVar15 = 0;
          FUN_021c80bc(0);
          ppuVar10 = &local_328;
          _swift_dynamicCast(ppuVar10,auStack_1b0,PTR___sypN_02578b08 + 8,uVar15,6);
          if (((ulong)ppuVar10 & 1) == 0) {
            local_470 = (undefined8 *)0x0;
          }
          else {
            local_470 = local_328;
          }
          local_478 = local_470;
        }
        if (local_478 == (undefined8 *)0x0) {
          _swift_bridgeObjectRelease(lVar14);
        }
        else {
          local_1c8 = local_478;
          puVar11 = local_478;
          FUN_02222880(local_478,local_3e0);
          uVar15 = local_38;
          local_1d0 = puVar11;
          _swift_bridgeObjectRetain();
          local_1d8 = uVar15;
          puVar3 = &DAT_028c7548;
          FUN_021c77d4(&DAT_028c7548,&DAT_0233bda0);
          puVar9 = puVar3;
          FUN_022196e0();
          __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
                    (&local_1e8,puVar3,puVar9,PTR___sSiSxsWP_02578a00);
          lVar17 = local_1e0;
          lVar16 = local_1e8;
          _swift_bridgeObjectRelease(uVar15);
          if ((long)puVar11 < lVar16 || lVar17 <= (long)puVar11) {
            (*(code *)PTR__objc_release_02578630)(local_478);
            _swift_bridgeObjectRelease(lVar14);
          }
          else {
            pcVar4 = "lightHex";
            uVar15 = 8;
            __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("lightHex",8,1);
            local_218 = pcVar4;
            local_210 = uVar15;
            __sSDyq_Sgxcig(auStack_208,&local_218,lVar14,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8
                           ,PTR___sSSSHsWP_02578940);
            FUN_021c7f98(&local_218);
            if (local_1f0 == 0) {
              FUN_021c7fc0(auStack_208);
              local_4e8 = 0;
              local_4e0 = 0;
            }
            else {
              puVar12 = &local_320;
              _swift_dynamicCast(puVar12,auStack_208,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
              if (((ulong)puVar12 & 1) == 0) {
                local_4d8 = 0;
                local_4d0 = 0;
              }
              else {
                local_4d8 = local_320;
                local_4d0 = local_318;
              }
              local_4e8 = local_4d8;
              local_4e0 = local_4d0;
            }
            lVar16 = local_4e0;
            FUN_02211dfc();
            _swift_bridgeObjectRelease(local_4e0);
            pcVar4 = "darkHex";
            uVar15 = 7;
            local_228 = local_4e8;
            local_220 = lVar16;
            __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("darkHex",7,1);
            local_258 = pcVar4;
            local_250 = uVar15;
            __sSDyq_Sgxcig(auStack_248,&local_258,lVar14,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8
                           ,PTR___sSSSHsWP_02578940);
            FUN_021c7f98(&local_258);
            if (local_230 == 0) {
              FUN_021c7fc0(auStack_248);
              local_528 = 0;
              local_520 = 0;
            }
            else {
              puVar12 = &local_310;
              _swift_dynamicCast(puVar12,auStack_248,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
              if (((ulong)puVar12 & 1) == 0) {
                local_518 = 0;
                local_510 = 0;
              }
              else {
                local_518 = local_310;
                local_510 = local_308;
              }
              local_528 = local_518;
              local_520 = local_510;
            }
            lVar17 = local_520;
            FUN_02211dfc();
            _swift_bridgeObjectRelease(local_520);
            local_268 = local_528;
            local_260 = lVar17;
            _swift_bridgeObjectRetain(lVar16);
            if (lVar16 == 0) {
              _swift_bridgeObjectRetain(lVar17);
              if (lVar17 != 0) {
                local_278 = local_528;
                local_270 = lVar17;
                _swift_bridgeObjectRetain();
                _swift_bridgeObjectRetain(lVar17);
                lVar18 = lVar17;
                uVar15 = local_528;
                lVar19 = lVar17;
                FUN_02211a40();
                pcVar13 = (code *)auStack_298;
                __sSayxSiciM(auStack_298,puVar11,puVar3);
                uVar1 = puVar11[1];
                uVar20 = puVar11[3];
                *puVar11 = local_528;
                puVar11[1] = lVar18;
                puVar11[2] = uVar15;
                puVar11[3] = lVar19;
                _swift_bridgeObjectRelease(uVar1);
                _swift_bridgeObjectRelease(uVar20);
                (*pcVar13)(auStack_298,0);
                _swift_bridgeObjectRelease(lVar17);
              }
            }
            else {
              local_2a8 = local_4e8;
              local_2a0 = lVar16;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(lVar17);
              local_2c8 = local_528;
              lStack_2c0 = lVar17;
              _swift_bridgeObjectRetain(lVar16);
              lStack_2d8 = lStack_2c0;
              local_2e0 = local_2c8;
              uVar15 = local_4e8;
              lVar18 = lVar16;
              if (lStack_2c0 != 0) {
                _swift_bridgeObjectRelease(lVar16);
                local_2b8 = local_2e0;
                local_2b0 = lStack_2d8;
                uVar15 = local_2b8;
                lVar18 = local_2b0;
              }
              local_2b0 = lVar18;
              local_2b8 = uVar15;
              lVar18 = lVar16;
              uVar15 = local_2b8;
              lVar19 = local_2b0;
              FUN_02211a40();
              pcVar13 = (code *)auStack_300;
              __sSayxSiciM(auStack_300,puVar11,puVar3);
              uVar1 = puVar11[1];
              uVar20 = puVar11[3];
              *puVar11 = local_4e8;
              puVar11[1] = lVar18;
              puVar11[2] = uVar15;
              puVar11[3] = lVar19;
              _swift_bridgeObjectRelease(uVar1);
              _swift_bridgeObjectRelease(uVar20);
              (*pcVar13)(auStack_300,0);
              _swift_bridgeObjectRelease(lVar16);
            }
            _swift_bridgeObjectRelease(lVar17);
            _swift_bridgeObjectRelease(lVar16);
            (*(code *)PTR__objc_release_02578630)(local_478);
            _swift_bridgeObjectRelease(lVar14);
          }
        }
      }
      FUN_022196b8(&local_178);
      _swift_bridgeObjectRelease(local_410);
      (*(code *)PTR__objc_release_02578630)(ppcVar5);
    }
  }
  uVar15 = local_38;
  _swift_bridgeObjectRetain();
  local_a8 = uVar15;
  puVar3 = &DAT_028c7548;
  FUN_021c77d4(&DAT_028c7548,&DAT_0233bda0);
  puVar9 = puVar3;
  FUN_022195a8();
  __sSlsE5first7ElementQzSgvg(&local_c8,puVar3);
  if (local_c0 == 0) {
    _swift_bridgeObjectRelease(uVar15);
    local_6a8 = (code *)0x0;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(0,PTR___s7SwiftUI5ColorVN_025788b8);
    _swift_bridgeObjectRelease(puVar2);
    FUN_0221961c(&local_38);
  }
  else {
    local_f0 = local_c8;
    lStack_e8 = local_c0;
    local_e0 = local_b8;
    uStack_d8 = local_b0;
    _swift_bridgeObjectRelease(uVar15);
    uVar15 = local_38;
    _swift_bridgeObjectRetain();
    lVar14 = 1;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF();
    _swift_bridgeObjectRetain(local_c0);
    _swift_bridgeObjectRetain(local_b0);
    *(undefined8 *)(lVar14 + 0x20) = local_c8;
    *(long *)(lVar14 + 0x28) = local_c0;
    *(undefined8 *)(lVar14 + 0x30) = local_b8;
    *(undefined8 *)(lVar14 + 0x38) = local_b0;
    FUN_021b0268(lVar14,&DAT_0258eca0);
    uVar1 = uVar15;
    __sSa1poiySayxGAB_ABtFZ(uVar15,lVar14,&DAT_0258eca0);
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(uVar15);
    local_6a8 = FUN_022125b8;
    local_f8 = uVar1;
    FUN_021b8da8(FUN_022125b8,0,puVar3,PTR___s7SwiftUI5ColorVN_025788b8,PTR___ss5NeverON_02578ab8,
                 puVar9,PTR___ss5NeverOs5ErrorsWP_02578ac0,local_3e0);
    FUN_0221961c(&local_f8);
    _swift_bridgeObjectRelease(local_c0);
    _swift_bridgeObjectRelease(local_b0);
    _swift_bridgeObjectRelease(puVar2);
    FUN_0221961c(&local_38);
  }
  return local_6a8;
}

