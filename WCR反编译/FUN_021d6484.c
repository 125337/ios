// FUN_021d6484 @ 021d6484

void FUN_021d6484(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  bool bVar1;
  long *plVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  void *aBlock;
  long unaff_x20;
  double dVar19;
  double dVar20;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_388;
  double local_378;
  undefined8 local_350;
  double local_340;
  undefined8 local_310;
  undefined1 auStack_250 [24];
  undefined8 local_238;
  undefined8 local_230;
  undefined1 auStack_228 [24];
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  code *local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 auStack_188 [24];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [24];
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined1 auStack_110 [24];
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  undefined1 local_78;
  undefined1 auStack_70 [24];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar14 = DAT_02339788;
  uVar8 = DAT_02323f28;
  uVar7 = DAT_02323ee8;
  uVar6 = DAT_02323da8;
  uVar5 = DAT_02323c60;
  local_78 = 0;
  local_80 = 0.0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_150 = 0;
  local_148 = 0;
  local_160 = 0;
  local_158 = 0;
  local_170 = 0;
  local_168 = 0;
  local_198 = 0;
  local_190 = 0;
  FUN_021cf8f4();
  if ((param_5 & 1) != 0) {
    plVar2 = (long *)(unaff_x20 + WCRSuperFloatFanMenuView::gridScrollView);
    _swift_beginAccess(plVar2,auStack_250,0x20,0);
    lVar10 = *plVar2;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess(auStack_250);
    if (lVar10 != 0) {
      FUN_022221c0(lVar10,local_310);
      dVar19 = param_2;
      dVar20 = param_2;
      (*(code *)PTR__objc_retain_02578638)(lVar10);
      FUN_02222060(lVar10,local_310);
      (*(code *)PTR__objc_release_02578630)(lVar10);
      FUN_021b0994(dVar19,dVar20,param_3,param_4);
      if (dVar19 + 1.0 < param_2) {
        FUN_021f1560();
        (*(code *)PTR__objc_release_02578630)(lVar10);
        return;
      }
      (*(code *)PTR__objc_release_02578630)(lVar10);
    }
  }
  puVar3 = (ulong *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar3,auStack_70,0x20,0);
  uVar11 = *puVar3;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_70);
  uVar12 = 0;
  FUN_021ce938(0);
  uVar13 = uVar11;
  __sSa5countSivg(uVar11,uVar12);
  _swift_bridgeObjectRelease(uVar11);
  bVar1 = 8 < (long)uVar13;
  local_78 = bVar1;
  FUN_021cf8c4();
  if ((uVar13 & 1) == 0) {
    if (bVar1) {
      local_378 = DAT_0232c6c8;
    }
    else {
      local_378 = DAT_0232c6c0;
    }
    local_80 = local_378;
    if (bVar1) {
      local_388 = DAT_02323e88;
    }
    else {
      local_388 = DAT_02324280;
    }
    local_88 = local_388;
    local_90 = uVar8;
    local_98 = uVar5;
  }
  else {
    if (bVar1) {
      local_340 = DAT_0232c6d0;
    }
    else {
      local_340 = DAT_02323d38;
    }
    local_80 = local_340;
    if (bVar1) {
      local_350 = uVar6;
    }
    else {
      local_350 = DAT_02323ec8;
    }
    local_88 = local_350;
    local_90 = uVar7;
    local_98 = uVar14;
  }
  dVar19 = local_80;
  uVar8 = local_88;
  uVar7 = local_90;
  uVar5 = local_98;
  puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar4,auStack_d0,0x20,0);
  uVar14 = *puVar4;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_d0);
  puVar15 = &DAT_028c7100;
  local_d8 = uVar14;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar16 = puVar15;
  FUN_021e282c();
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar15,puVar16);
  FUN_021e28a0(&local_d8);
  FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(&local_b0);
  while( true ) {
    FUN_021c77d4(&DAT_028c7140,&DAT_0233b148);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&local_e8);
    lVar9 = local_e0;
    lVar10 = local_e8;
    if (local_e0 == 0) break;
    local_f0 = local_e8;
    local_f8 = local_e0;
    puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
    _swift_beginAccess(puVar4,auStack_110,0x20,0);
    uVar14 = *puVar4;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_110);
    puVar15 = &DAT_028c7110;
    local_118 = uVar14;
    FUN_021c77d4(&DAT_028c7110,&DAT_0233b120);
    puVar16 = puVar15;
    FUN_021ed084();
    __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
              (&local_128,puVar15,puVar16,PTR___sSiSxsWP_02578a00);
    lVar17 = local_120;
    lVar18 = local_128;
    _swift_bridgeObjectRelease(uVar14);
    if (lVar10 < lVar18 || lVar17 <= lVar10) {
      puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
      _swift_beginAccess(puVar4,auStack_140,0x20,0);
      local_450 = *puVar4;
      local_448 = puVar4[1];
      _swift_endAccess(auStack_140);
    }
    else {
      puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
      _swift_beginAccess(puVar4,auStack_228,0x20,0);
      uVar12 = *puVar4;
      uVar14 = 0;
      FUN_021cc950(0);
      __sSayxSicig(&local_238,lVar10,uVar12,uVar14);
      local_448 = local_230;
      local_450 = local_238;
      _swift_endAccess(auStack_228);
    }
    local_150 = local_450;
    local_148 = local_448;
    FUN_021ed0f8(lVar9);
    local_160 = local_450;
    local_158 = local_448;
    FUN_021f13e8(lVar9);
    puVar4 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
    local_170 = local_450;
    local_168 = local_448;
    _swift_beginAccess(puVar4,auStack_188,0x20);
    uVar12 = *puVar4;
    uVar14 = puVar4[1];
    _swift_endAccess(auStack_188);
    FUN_021f13e8(lVar9);
    local_198 = uVar12;
    local_190 = uVar14;
    (*(code *)PTR__objc_retain_02578638)(lVar9);
    local_1a8 = uVar12;
    local_1a0 = uVar14;
    FUN_02222e40(uVar12,uVar14,lVar9,local_310);
    (*(code *)PTR__objc_release_02578630)(lVar9);
    (*(code *)PTR__objc_retain_02578638)(lVar9);
    FUN_02222cc0(0,lVar9,local_310);
    (*(code *)PTR__objc_release_02578630)(lVar9);
    (*(code *)PTR__objc_retain_02578638)(lVar9);
    FUN_021dbf50(&local_50,uVar6);
    local_1d8 = local_50;
    local_1d0 = local_48;
    local_1c8 = local_40;
    local_1c0 = local_38;
    local_1b8 = local_30;
    local_1b0 = local_28;
    FUN_02223680(lVar9,local_310,&local_1d8);
    (*(code *)PTR__objc_release_02578630)(lVar9);
    puVar16 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_opt_self();
    uVar14 = 0;
    FUN_021c720c(0);
    lVar17 = 2;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar14);
    *(undefined8 *)(lVar17 + 0x20) = 0x20000;
    *(undefined8 *)(lVar17 + 0x28) = 2;
    FUN_021b0268();
    lVar18 = lVar17;
    FUN_021c72a0();
    __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
              (&local_1e0,lVar17,uVar14,lVar18);
    uVar14 = local_1e0;
    (*(code *)PTR__objc_retain_02578638)(lVar9);
    puVar15 = &DAT_0258dd88;
    _swift_allocObject(&DAT_0258dd88,0x28,7);
    *(long *)(puVar15 + 0x10) = lVar9;
    *(undefined8 *)(puVar15 + 0x18) = local_450;
    *(undefined8 *)(puVar15 + 0x20) = local_448;
    local_1f0 = FUN_021f1af0;
    local_210 = PTR___NSConcreteStackBlock_02578660;
    local_208 = 0x42000000;
    local_204 = 0;
    local_200 = FUN_021ae198;
    local_1f8 = &DAT_0258dda0;
    local_1e8 = puVar15;
    aBlock = __Block_copy(&local_210);
    _swift_release(local_1e8);
    FUN_02221f20(uVar8,dVar19 * (double)lVar10,uVar7,uVar5,puVar16,local_310,uVar14,aBlock,0);
    __Block_release(aBlock);
    (*(code *)PTR__objc_release_02578630)(lVar9);
  }
  FUN_021ed05c(&local_b0);
  return;
}

