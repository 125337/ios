// _$s8WCRefine24WCRSuperFloatFanMenuViewC13indexOfAction2atSiSo7CGPointV_tF @ 021d77e0

long __s8WCRefine24WCRSuperFloatFanMenuViewC13indexOfAction2atSiSo7CGPointV_tF
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x20;
  double dVar17;
  double dVar18;
  long local_7a0;
  double local_798;
  double local_6c8;
  double local_6c0;
  double local_6a8;
  double local_6a0;
  double local_668;
  double local_660;
  long local_518;
  double local_510;
  long local_500;
  undefined8 local_3f8;
  double local_290;
  double dStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  long local_260;
  ulong local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined1 auStack_240 [32];
  undefined8 local_220;
  undefined8 local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined1 local_1b0;
  long local_1a8;
  double local_1a0;
  double local_198;
  undefined1 auStack_190 [24];
  double local_178;
  undefined1 auStack_170 [24];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  undefined1 auStack_120 [24];
  double local_108;
  double local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  undefined1 auStack_88 [24];
  double local_70;
  undefined1 auStack_68 [24];
  double local_50;
  double local_48;
  long local_40;
  
  dVar4 = DAT_02323c88;
  local_40 = 0;
  local_48 = 0.0;
  local_98 = 0.0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_108 = 0.0;
  local_100 = 0.0;
  local_178 = 0.0;
  local_1a8 = 0;
  local_1e0 = 0.0;
  local_1d8 = 0.0;
  local_220 = 0;
  local_218 = 0;
  uVar11 = 0;
  dVar17 = param_1;
  FUN_021cf8f4();
  if ((param_5 & 1) == 0) {
    local_40 = -1;
    local_48 = 1.7976931348623157e+308;
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::buttonSize);
    _swift_beginAccess();
    dVar17 = *pdVar2;
    _swift_endAccess(auStack_68);
    local_70 = dVar17 * 0.95;
    pdVar2 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::slotFootprint);
    puVar10 = auStack_88;
    _swift_beginAccess(pdVar2,puVar10,0x20,0);
    dVar17 = *pdVar2;
    _swift_endAccess(puVar10);
    local_90 = dVar17 * 0.7;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (&local_50,&local_70,&local_90,PTR___s12CoreGraphics7CGFloatVN_02578ba0,puVar10);
    local_98 = local_50;
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
    _swift_beginAccess(puVar1,auStack_d0,0x20,0);
    uVar11 = *puVar1;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_d0);
    puVar12 = &DAT_028c7100;
    local_d8 = uVar11;
    FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
    puVar13 = puVar12;
    FUN_021e282c();
    __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar12,puVar13);
    FUN_021e28a0(&local_d8);
    FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
    __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(&local_b0);
    local_518 = -1;
    local_510 = 1.7976931348623157e+308;
    local_798 = local_510;
    while( true ) {
      FUN_021c77d4(&DAT_028c7140,&DAT_0233b148);
      __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&local_e8);
      lVar5 = local_e0;
      local_7a0 = local_e8;
      if (local_e0 == 0) break;
      local_f0 = local_e8;
      local_f8 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02221ea0(lVar5,local_3f8);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      if (dVar4 < local_798) {
        lVar14 = lVar5;
        dVar17 = dVar4;
        FUN_02223ac0(lVar5,local_3f8,0x77636963);
        _objc_retainAutoreleasedReturnValue();
        if (lVar14 == 0) {
          puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
          _swift_beginAccess(puVar1,auStack_120,0x20,0);
          uVar11 = *puVar1;
          _swift_bridgeObjectRetain();
          _swift_endAccess(auStack_120);
          puVar12 = &DAT_028c7110;
          local_128 = uVar11;
          FUN_021c77d4(&DAT_028c7110,&DAT_0233b120);
          puVar13 = puVar12;
          FUN_021ed084();
          __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
                    (&local_138,puVar12,puVar13,PTR___sSiSxsWP_02578a00);
          lVar15 = local_130;
          lVar14 = local_138;
          _swift_bridgeObjectRelease(uVar11);
          if (local_7a0 < lVar14 || lVar15 <= local_7a0) {
            (*(code *)PTR__objc_retain_02578638)(lVar5);
            FUN_022220c0(lVar5,local_3f8);
            dVar18 = dVar17;
            local_148 = dVar17;
            local_140 = local_798;
            (*(code *)PTR__objc_release_02578630)(lVar5);
            (*(code *)PTR__objc_retain_02578638)(lVar5);
            FUN_022220c0(lVar5,local_3f8);
            local_158 = dVar18;
            local_150 = local_798;
            (*(code *)PTR__objc_release_02578630)(lVar5);
            pdVar2 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::titleBandHeight);
            _swift_beginAccess(pdVar2,auStack_170,0x20,0);
            dVar18 = *pdVar2;
            _swift_endAccess(auStack_170);
            local_100 = local_798 - dVar18 * 0.5;
            local_108 = dVar17;
          }
          else {
            puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
            _swift_beginAccess(puVar1,auStack_190,0x20,0);
            uVar7 = *puVar1;
            uVar11 = 0;
            FUN_021cc950(0);
            __sSayxSicig(&local_1a0,local_7a0,uVar7,uVar11);
            dVar18 = local_198;
            dVar17 = local_1a0;
            _swift_endAccess(auStack_190);
            local_108 = dVar17;
            local_100 = dVar18;
          }
          local_6c8 = local_100;
          local_6c0 = local_108;
        }
        else {
          lVar15 = lVar14;
          local_1a8 = lVar14;
          FUN_02222960(lVar14,local_3f8);
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar15;
          FUN_02222ac0();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(lVar15);
          bVar3 = lVar16 == 0;
          if (bVar3) {
            local_668 = 0.0;
            local_660 = 0.0;
            local_6a8 = dVar17;
            local_6a0 = local_798;
          }
          else {
            FUN_02222a80(lVar16,local_3f8);
            local_6a8 = dVar17;
            local_6a0 = local_798;
            local_210 = dVar17;
            local_208 = local_798;
            (*(code *)PTR__objc_release_02578630)(lVar16);
            local_668 = dVar17;
            local_660 = local_798;
          }
          (*(code *)PTR__objc_retain_02578638)(lVar14);
          local_1c0 = local_668;
          local_1b8 = local_660;
          local_1b0 = bVar3;
          if (bVar3) {
            FUN_022220c0(0,lVar14,local_3f8);
            local_1d0 = local_6a8;
            local_1c8 = local_6a0;
            (*(code *)PTR__objc_release_02578630)(lVar14);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(lVar14);
            local_6a8 = local_1c0;
            local_6a0 = local_1b8;
          }
          local_1e0 = local_6a8;
          local_1d8 = local_6a0;
          (*(code *)PTR__objc_retain_02578638)(unaff_x20);
          local_1f0 = local_6a8;
          local_1e8 = local_6a0;
          FUN_02222220(lVar5,local_3f8,unaff_x20);
          local_200 = local_6a8;
          local_1f8 = local_6a0;
          _swift_unknownObjectRelease(unaff_x20);
          local_108 = local_6a8;
          local_100 = local_6a0;
          (*(code *)PTR__objc_release_02578630)(lVar14);
          local_6c8 = local_6a0;
          local_6c0 = local_6a8;
        }
        local_6c0 = param_1 - local_6c0;
        _hypot(local_6c0,param_2 - local_6c8);
        if (local_50 <= local_6c0 || local_510 <= local_6c0) {
          local_7a0 = local_518;
          local_798 = local_510;
        }
        else {
          local_40 = local_7a0;
          local_798 = local_6c0;
          local_48 = local_6c0;
        }
        local_178 = local_6c0;
        (*(code *)PTR__objc_release_02578630)(lVar5);
        local_518 = local_7a0;
        local_510 = local_798;
      }
      else {
        local_798 = dVar4;
        (*(code *)PTR__objc_release_02578630)(lVar5);
      }
    }
    FUN_021ed05c(&local_b0);
    local_500 = local_518;
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
    _swift_beginAccess(puVar1,auStack_240,0x20,0);
    uVar7 = *puVar1;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_240);
    puVar12 = &DAT_028c7100;
    local_248 = uVar7;
    FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
    puVar13 = puVar12;
    FUN_021e282c();
    __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar12,puVar13);
    FUN_021e28a0(&local_248);
    puVar12 = &DAT_028c7138;
    FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
    puVar13 = puVar12;
    FUN_021f1d10();
    __sSTsE8reversedSay7ElementQzGyF(puVar12,puVar13);
    puVar13 = &DAT_028c7158;
    local_250 = puVar12;
    FUN_021c77d4(&DAT_028c7158,&DAT_0233b150);
    puVar12 = puVar13;
    FUN_021f1d84();
    __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_220,puVar13,puVar12);
    while( true ) {
      FUN_021c77d4(&DAT_028c7168,&DAT_0233b158);
      __ss16IndexingIteratorV4next7ElementQzSgyF(&local_260);
      uVar6 = local_258;
      lVar5 = local_260;
      if (local_258 == 0) break;
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02221ea0(uVar6,local_3f8);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      if (dVar17 <= dVar4) {
        dVar17 = dVar4;
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      else {
        local_290 = dVar4;
        (*(code *)PTR__objc_retain_02578638)(uVar6);
        uVar8 = uVar6;
        FUN_02222960(uVar6,local_3f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar9 = uVar8;
        FUN_02222ac0(uVar8,local_3f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(uVar8);
        if (uVar9 == 0) {
LAB_021d7c4c:
          (*(code *)PTR__objc_retain_02578638)(uVar6);
          FUN_02222060(uVar6,local_3f8);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_retain_02578638)(unaff_x20);
          FUN_02222240(uVar6,local_3f8,unaff_x20);
          uVar9 = unaff_x20;
          _swift_unknownObjectRelease();
          dStack_288 = dVar17;
          local_280 = uVar11;
          uStack_278 = param_4;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)(uVar6);
          uVar8 = uVar6;
          FUN_02223880(uVar6,local_3f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if (uVar8 == 0) {
            (*(code *)PTR__objc_release_02578630)(uVar9);
            goto LAB_021d7c4c;
          }
          FUN_02222440(uVar9,local_3f8);
          (*(code *)PTR__objc_retain_02578638)(unaff_x20);
          FUN_02222240(uVar8,local_3f8,unaff_x20);
          _swift_unknownObjectRelease(unaff_x20);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          (*(code *)PTR__objc_release_02578630)();
          dStack_288 = dVar17;
          local_280 = uVar11;
          uStack_278 = param_4;
        }
        param_4 = 0xc000000000000000;
        uVar11 = 0xc000000000000000;
        FUN_021b4eac(0xc000000000000000,0xc000000000000000,local_290,dStack_288,local_280,uStack_278
                    );
        dVar17 = param_1;
        FUN_021b1f24(param_1,param_2,uVar11,param_4,local_290,dStack_288);
        if ((uVar9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(uVar6);
          FUN_021f1df8(&local_220);
          return lVar5;
        }
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
    }
    FUN_021f1df8(&local_220);
    local_500 = -1;
  }
  return local_500;
}

