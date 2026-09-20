// FUN_02201ed4 @ 02201ed4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_02201ed4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  double dVar17;
  long local_498;
  undefined1 auStack_2d0 [24];
  undefined8 local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  long local_218;
  undefined1 auStack_210 [24];
  long local_1f8;
  undefined1 auStack_1f0 [24];
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined1 auStack_1c0 [24];
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  long local_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [8];
  undefined8 local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  undefined1 auStack_50 [24];
  
  local_58 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_178 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_1f8 = 0;
  local_218 = 0;
  dStack_268 = 0.0;
  local_270 = 0.0;
  dStack_258 = 0.0;
  local_260 = 0.0;
  local_298 = 0;
  local_2a0 = 0;
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::atlas);
  _swift_beginAccess(plVar1,auStack_50,0x20,0);
  lVar6 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_50);
  if (lVar6 == 0) {
    local_498 = 0;
  }
  else {
    puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
    puVar7 = puVar2;
    local_58 = lVar6;
    _swift_beginAccess(puVar2,auStack_88,0x20,0);
    uVar12 = *puVar2;
    local_a8 = param_1;
    FUN_021fd890();
    __sSDyq_Sgxcig(&local_a0,&local_a8,uVar12,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                   &DAT_0258e780);
    _swift_endAccess(auStack_88);
    local_c0 = local_a0;
    uStack_b8 = local_98;
    local_b0 = local_90;
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    uStack_d8 = uStack_b8;
    local_e0 = local_c0;
    local_d0 = local_b0;
    if (local_b0 == 0) {
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::specs);
      _swift_beginAccess(puVar2,auStack_f8,0x20,0);
      local_100 = 0;
      __sSDyq_Sgxcig(&local_70,&local_100,*puVar2,&__s8WCRefine22WCRSuperFloatPetPlayerC5StateON,
                     &DAT_0258e780,puVar7);
      _swift_endAccess(auStack_f8);
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      if (local_d0 != 0) {
        FUN_021fe238(&local_e0);
      }
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      uStack_68 = uStack_d8;
      local_70 = local_e0;
      local_60 = local_d0;
    }
    lVar4 = local_60;
    local_118 = local_70;
    local_110 = uStack_68;
    local_108 = local_60;
    _swift_bridgeObjectRetain();
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(0);
      (*(code *)PTR__objc_release_02578630)(lVar6);
      local_498 = 0;
    }
    else {
      local_130 = local_70;
      local_128 = uStack_68;
      local_120 = lVar4;
      local_140 = 0;
      plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::columns);
      _swift_beginAccess(plVar1,auStack_160,0x20,0);
      lVar11 = *plVar1;
      _swift_endAccess(auStack_160);
      puVar3 = PTR___sSiSLsWP_025789e8;
      puVar8 = PTR___sSiN_025789d8;
      local_168 = lVar11 + -1;
      if (SBORROW8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x220285c);
        (*pcVar5)();
      }
      local_170 = param_2;
      __ss3minyxx_xtSLRzlF(&local_168,&local_170);
      __ss3maxyxx_xtSLRzlF(&local_138,&local_140,auStack_148,puVar8,puVar3);
      local_178 = local_138;
      uVar12 = 1;
      uVar9 = 2;
      __ss26DefaultStringInterpolationV15literalCapacity18interpolationCountABSi_SitcfC();
      uVar10 = 0;
      local_188 = uVar12;
      local_180 = uVar9;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
      __ss26DefaultStringInterpolationV13appendLiteralyySSF();
      _swift_bridgeObjectRelease(uVar10);
      __s8WCRefine22WCRSuperFloatPetPlayerC5StateO8rawValueSivg();
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_02578a18;
      local_190 = param_1;
      __ss26DefaultStringInterpolationV06appendC0yyxs06CustomB11ConvertibleRzlF(&local_190,puVar8);
      uVar12 = 1;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("-",1,1);
      __ss26DefaultStringInterpolationV13appendLiteralyySSF();
      _swift_bridgeObjectRelease(uVar12);
      local_198 = local_138;
      __ss26DefaultStringInterpolationV06appendC0yyxs06CustomB11ConvertibleRzlF
                (&local_198,puVar8,puVar3);
      uVar12 = 0;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,1);
      __ss26DefaultStringInterpolationV13appendLiteralyySSF();
      _swift_bridgeObjectRelease(uVar12);
      uVar9 = local_180;
      uVar12 = local_188;
      _swift_bridgeObjectRetain();
      FUN_02204094(&local_188);
      __sSS19stringInterpolationSSs013DefaultStringB0V_tcfC();
      local_1a8 = uVar12;
      local_1a0 = uVar9;
      _swift_bridgeObjectRetain();
      puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatPetPlayer::frameCache);
      _swift_beginAccess(puVar2,auStack_1c0,0x20,0);
      uVar10 = 0;
      uVar13 = *puVar2;
      local_1d8 = uVar12;
      local_1d0 = uVar9;
      FUN_021c8238();
      __sSDyq_Sgxcig(&local_1c8,&local_1d8,uVar13,PTR___sSSN_02578938,uVar10,PTR___sSSSHsWP_02578940
                    );
      FUN_021c7f98(&local_1d8);
      if (local_1c8 == 0) {
        _swift_endAccess(auStack_1c0);
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::cellW);
        _swift_beginAccess(plVar1,auStack_1f0,0x20,0);
        lVar11 = *plVar1;
        _swift_endAccess(auStack_1f0);
        lVar14 = local_138 * lVar11;
        if (SUB168(SEXT816(local_138) * SEXT816(lVar11),8) != lVar14 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x2202860);
          (*pcVar5)();
        }
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::cellH);
        local_1f8 = lVar14;
        _swift_beginAccess(plVar1,auStack_210,0x20,0);
        lVar11 = *plVar1;
        _swift_endAccess(auStack_210);
        lVar15 = local_70 * lVar11;
        if (SUB168(SEXT816(local_70) * SEXT816(lVar11),8) != lVar15 >> 0x3f) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x2202864);
          (*pcVar5)();
        }
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::cellW);
        local_218 = lVar15;
        _swift_beginAccess();
        lVar11 = *plVar1;
        _swift_endAccess(auStack_230);
        plVar1 = (long *)(unaff_x20 + WCRSuperFloatPetPlayer::cellH);
        _swift_beginAccess(plVar1,auStack_248,0x20,0);
        lVar16 = *plVar1;
        _swift_endAccess(auStack_248);
        dVar17 = (double)lVar14;
        local_288 = (double)lVar15;
        local_280 = (double)lVar11;
        local_278 = (double)lVar16;
        lVar11 = lVar6;
        local_290 = dVar17;
        local_270 = dVar17;
        dStack_268 = local_288;
        local_260 = local_280;
        dStack_258 = local_278;
        _CGImageCreateWithImageInRect(dVar17,local_288,local_280,local_278);
        if (lVar11 == 0) {
          _swift_bridgeObjectRelease(uVar9);
          _swift_bridgeObjectRelease(lVar4);
          _swift_bridgeObjectRelease(lVar4);
          (*(code *)PTR__objc_release_02578630)(lVar6);
          local_498 = 0;
        }
        else {
          local_298 = lVar11;
          (*(code *)PTR__objc_retain_02578638)();
          puVar8 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          _objc_opt_self();
          FUN_02222a00();
          _objc_retainAutoreleasedReturnValue();
          FUN_02222c00();
          (*(code *)PTR__objc_release_02578630)(puVar8);
          local_498 = lVar11;
          FUN_021fbf64(dVar17,lVar11,0);
          local_2a0 = local_498;
          _swift_bridgeObjectRetain(uVar9);
          (*(code *)PTR__objc_retain_02578638)(local_498);
          local_2b8 = uVar12;
          local_2b0 = uVar9;
          local_2a8 = local_498;
          _swift_beginAccess(unaff_x20 + WCRSuperFloatPetPlayer::frameCache,auStack_2d0,0x21,0);
          puVar8 = &DAT_028c7390;
          FUN_021c77d4(&DAT_028c7390,&DAT_0233b6a8);
          __sSDyq_Sgxcis(&local_2a8,&local_2b8,puVar8);
          _swift_endAccess(auStack_2d0);
          (*(code *)PTR__objc_release_02578630)(lVar11);
          _swift_bridgeObjectRelease(uVar9);
          _swift_bridgeObjectRelease(lVar4);
          _swift_bridgeObjectRelease(lVar4);
          (*(code *)PTR__objc_release_02578630)(lVar6);
        }
      }
      else {
        _swift_endAccess(auStack_1c0);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(lVar4);
        _swift_bridgeObjectRelease(lVar4);
        (*(code *)PTR__objc_release_02578630)(lVar6);
        local_498 = local_1c8;
      }
    }
  }
  return local_498;
}

