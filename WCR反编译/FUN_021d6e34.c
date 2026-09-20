// FUN_021d6e34 @ 021d6e34

void FUN_021d6e34(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void *aBlock;
  long unaff_x20;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3a0;
  undefined8 local_390;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 auStack_228 [24];
  undefined8 local_210;
  undefined8 local_208;
  undefined1 auStack_200 [24];
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  code *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_180 [24];
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined1 auStack_150 [24];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  ulong local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar2 = DAT_02323e88;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_021cf8f4();
  if (((ulong)param_5 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::gridScrollView);
    param_5 = auStack_228;
    _swift_beginAccess(puVar1,param_5,0x20,0);
    puVar5 = (undefined1 *)*puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _swift_endAccess();
    if (puVar5 != (undefined1 *)0x0) {
      FUN_022221c0(puVar5,local_2c8);
      dVar12 = param_2;
      dVar14 = param_2;
      (*(code *)PTR__objc_retain_02578638)(puVar5);
      FUN_02222060(puVar5,local_2c8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      FUN_021b0994(dVar12,dVar14,param_3,param_4);
      if (dVar12 + 1.0 < param_2) {
        FUN_021f1560();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        return;
      }
      (*(code *)PTR__objc_release_02578630)();
      param_5 = puVar5;
    }
  }
  FUN_021cf8c4();
  if (((ulong)param_5 & 1) == 0) {
    local_2d0 = DAT_02323ec8;
  }
  else {
    local_2d0 = DAT_02323c70;
  }
  local_60 = local_2d0;
  FUN_021cf8c4();
  if (((ulong)param_5 & 1) == 0) {
    local_2e0 = DAT_02323f88;
  }
  else {
    local_2e0 = DAT_02323c60;
  }
  local_68 = local_2e0;
  FUN_021cf8c4();
  if (((ulong)param_5 & 1) == 0) {
    local_2f0 = DAT_02323d00;
  }
  else {
    local_2f0 = DAT_02339788;
  }
  local_70 = local_2f0;
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar1,auStack_a8,0x20,0);
  uVar6 = *puVar1;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_a8);
  puVar7 = &DAT_028c7100;
  local_b0 = uVar6;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar8 = puVar7;
  FUN_021e282c();
  __sSTsE10enumerateds18EnumeratedSequenceVyxGyF(puVar7,puVar8);
  FUN_021e28a0(&local_b0);
  FUN_021c77d4(&DAT_028c7138,&DAT_0233b140);
  __ss18EnumeratedSequenceV12makeIteratorAB0D0Vyx_GyF(&local_88);
  while( true ) {
    FUN_021c77d4(&DAT_028c7140,&DAT_0233b148);
    __ss18EnumeratedSequenceV8IteratorV4nextSi6offset_7ElementQz7elementtSgyF(&local_c0);
    uVar4 = local_b8;
    lVar11 = local_c0;
    if (local_b8 == 0) break;
    local_c8 = local_c0;
    local_d0 = local_b8;
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
    _swift_beginAccess(puVar1,auStack_e8,0x20,0);
    uVar13 = *puVar1;
    uVar6 = puVar1[1];
    _swift_endAccess(auStack_e8);
    FUN_021f13e8(uVar4);
    local_f8 = uVar13;
    local_f0 = uVar6;
    (*(code *)PTR__objc_retain_02578638)(uVar4);
    local_108 = uVar13;
    local_100 = uVar6;
    FUN_02222e40(uVar13,uVar6,uVar4,local_2c8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_retain_02578638)(uVar4);
    FUN_02222cc0(0,uVar4,local_2c8);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar9 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_021cf8c4();
    if ((uVar9 & 1) == 0) {
      local_390 = 0x3fd0000000000000;
    }
    else {
      local_390 = uVar2;
    }
    FUN_021cf8c4();
    if ((uVar9 & 1) == 0) {
      local_3a0 = 0x3fd0000000000000;
    }
    else {
      local_3a0 = uVar2;
    }
    FUN_021dbf50(&local_50,local_390,local_3a0);
    local_138 = local_50;
    local_130 = local_48;
    local_128 = local_40;
    local_120 = local_38;
    local_118 = local_30;
    local_110 = local_28;
    FUN_02223680(uVar4,local_2c8,&local_138);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
    _swift_beginAccess(puVar1,auStack_150,0x20,0);
    uVar6 = *puVar1;
    _swift_bridgeObjectRetain();
    _swift_endAccess(auStack_150);
    puVar7 = &DAT_028c7110;
    local_158 = uVar6;
    FUN_021c77d4(&DAT_028c7110,&DAT_0233b120);
    puVar8 = puVar7;
    FUN_021ed084();
    __sSksSx5IndexRpzSnyABG7IndicesRtzSiAA_6StrideRTzrlE7indicesACvg
              (&local_168,puVar7,puVar8,PTR___sSiSxsWP_02578a00);
    lVar3 = local_160;
    lVar10 = local_168;
    _swift_bridgeObjectRelease(uVar6);
    if (lVar11 < lVar10 || lVar3 <= lVar11) {
      puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::origin);
      _swift_beginAccess(puVar1,auStack_180,0x20,0);
      local_3e8 = *puVar1;
      local_3e0 = puVar1[1];
      _swift_endAccess(auStack_180);
    }
    else {
      puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::finalCenters);
      _swift_beginAccess(puVar1,auStack_200,0x20,0);
      uVar13 = *puVar1;
      uVar6 = 0;
      FUN_021cc950(0);
      __sSayxSicig(&local_210,lVar11,uVar13,uVar6);
      local_3e0 = local_208;
      local_3e8 = local_210;
      _swift_endAccess(auStack_200);
    }
    local_190 = local_3e8;
    local_188 = local_3e0;
    FUN_021ed0f8(uVar4);
    local_1a0 = local_3e8;
    local_198 = local_3e0;
    FUN_021f13e8(uVar4);
    puVar8 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_1b0 = local_3e8;
    local_1a8 = local_3e0;
    _objc_opt_self();
    uVar6 = 0;
    FUN_021c720c(0);
    lVar10 = 2;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar6);
    *(undefined8 *)(lVar10 + 0x20) = 0x20000;
    *(undefined8 *)(lVar10 + 0x28) = 2;
    FUN_021b0268();
    lVar11 = lVar10;
    FUN_021c72a0();
    __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
              (&local_1b8,lVar10,uVar6,lVar11);
    uVar6 = local_1b8;
    (*(code *)PTR__objc_retain_02578638)(uVar4);
    puVar7 = &DAT_0258ddd8;
    _swift_allocObject(&DAT_0258ddd8,0x28,7);
    *(ulong *)(puVar7 + 0x10) = uVar4;
    *(undefined8 *)(puVar7 + 0x18) = local_3e8;
    *(undefined8 *)(puVar7 + 0x20) = local_3e0;
    local_1c8 = FUN_021f1ca4;
    local_1e8 = PTR___NSConcreteStackBlock_02578660;
    local_1e0 = 0x42000000;
    local_1dc = 0;
    local_1d8 = FUN_021ae198;
    local_1d0 = &DAT_0258ddf0;
    local_1c0 = puVar7;
    aBlock = __Block_copy(&local_1e8);
    _swift_release(local_1c0);
    FUN_02221f20(local_2d0,0,local_2e0,local_2f0,puVar8,local_2c8,uVar6,aBlock,0);
    __Block_release(aBlock);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  FUN_021ed05c(&local_88);
  return;
}

