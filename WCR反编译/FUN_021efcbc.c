// FUN_021efcbc @ 021efcbc

/* WARNING: Removing unreachable block (ram,0x021f01c4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_021efcbc(double param_1,double param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_2f8;
  double local_2c8;
  long local_290;
  long local_288;
  undefined8 local_228;
  double local_188;
  double local_180;
  double local_178;
  long local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148 [2];
  undefined1 auStack_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  double local_100 [3];
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  long local_d0;
  double local_c8 [3];
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  
  local_60 = 0;
  local_58 = 0;
  local_90 = 0;
  local_d0 = 0;
  local_e8 = 0.0;
  local_170 = 0;
  pdVar1 = (double *)(unaff_x20 + WCRSuperFloatFanMenuView::gridCellSize);
  _swift_beginAccess(pdVar1,auStack_50,0x21);
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  _swift_endAccess(auStack_50);
  puVar2 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::actionButtons);
  _swift_beginAccess(puVar2,auStack_78,0x20,0);
  uVar5 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_endAccess(auStack_78);
  puVar6 = &DAT_028c7100;
  local_80 = uVar5;
  FUN_021c77d4(&DAT_028c7100,&DAT_0233b118);
  puVar7 = puVar6;
  FUN_021fafc8();
  __sSlss16IndexingIteratorVyxG0B0RtzrlE04makeB0ACyF(&local_60,puVar6,puVar7);
  while( true ) {
    FUN_021c77d4(&DAT_028c7190,&DAT_0233b168);
    __ss16IndexingIteratorV4next7ElementQzSgyF(&local_88);
    lVar4 = local_88;
    if (local_88 == 0) break;
    local_90 = local_88;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = 0;
    local_a8 = 0;
    dVar11 = param_1;
    dVar12 = param_2;
    local_a0 = param_1;
    local_98 = param_2;
    FUN_02222dc0(0,0,lVar4,local_228);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_retain_02578638)(lVar4);
    lVar8 = lVar4;
    FUN_02222960(lVar4,local_228);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar4;
    (*(code *)PTR__objc_release_02578630)();
    local_c8[1] = 8.0;
    local_c8[0] = param_1 * DAT_02323c70;
    dVar10 = DAT_02323c70;
    FUN_021c8058();
    __ss3maxyxx_xtSLRzlF
              (local_c8 + 2,local_c8 + 1,local_c8,PTR___s12CoreGraphics7CGFloatVN_02578ba0);
    local_2c8 = local_c8[2];
    FUN_02222f40(lVar8,local_228);
    (*(code *)PTR__objc_release_02578630)(lVar8);
    lVar8 = lVar4;
    FUN_02223ac0(lVar4,local_228,0x77636963);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 != 0) {
      local_180 = param_1 * DAT_02324020;
      local_188 = param_2 * DAT_02323f38;
      local_170 = lVar8;
      __ss3minyxx_xtSLRzlF
                (&local_178,&local_180,&local_188,PTR___s12CoreGraphics7CGFloatVN_02578ba0,lVar9);
      local_2c8 = (param_1 - local_178) * 0.5;
      dVar10 = 6.0;
      dVar11 = local_178;
      dVar12 = local_178;
      FUN_022230c0(lVar8,local_228);
      FUN_021ef5b4(lVar8);
      (*(code *)PTR__objc_release_02578630)(lVar8);
    }
    lVar8 = lVar4;
    FUN_02223ac0(lVar4,local_228,0x7763746c);
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      local_290 = 0;
    }
    else {
      puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_opt_self(PTR__OBJC_CLASS___UILabel_026cdfb8);
      local_288 = lVar8;
      _swift_dynamicCastObjCClass(lVar8,puVar6);
      if (local_288 == 0) {
        (*(code *)PTR__objc_release_02578630)(lVar8);
        local_288 = 0;
      }
      local_290 = local_288;
    }
    if (local_290 != 0) {
      local_d0 = local_290;
      lVar8 = lVar4;
      FUN_02223ac0(lVar4,local_228,0x77636963);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = lVar8 == 0;
      if (bVar3) {
        local_2c8 = 0.0;
      }
      else {
        FUN_02222440(lVar8,local_228);
        local_168 = local_2c8;
        local_160 = dVar10;
        local_158 = dVar11;
        local_150 = dVar12;
        (*(code *)PTR__objc_release_02578630)(lVar8);
        FUN_021f03c0(local_2c8,dVar10,dVar11,dVar12);
      }
      local_e0 = local_2c8;
      if (bVar3) {
        local_2f8 = 28.0;
      }
      else {
        local_2f8 = local_2c8;
      }
      local_2f8 = local_2f8 + 2.0;
      local_e8 = local_2f8;
      local_d8 = bVar3;
      (*(code *)PTR__objc_retain_02578638)(local_290);
      puVar6 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
      local_100[1] = 12.0;
      local_100[0] = (param_2 - local_2f8) - 3.0;
      __ss3maxyxx_xtSLRzlF
                (local_100 + 2,local_100 + 1,local_100,PTR___s12CoreGraphics7CGFloatVN_02578ba0,
                 lVar9);
      local_120 = 0x4000000000000000;
      local_108 = local_100[2];
      local_118 = local_2f8;
      local_110 = param_1 - 4.0;
      FUN_022230c0(0x4000000000000000,local_2f8,param_1 - 4.0,local_100[2],local_290,local_228);
      (*(code *)PTR__objc_release_02578630)(local_290);
      puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      _objc_opt_self();
      local_130 = 0x4020000000000000;
      local_148[1] = 10.0;
      local_148[0] = param_1 * DAT_02323d40;
      __ss3minyxx_xtSLRzlF(local_148 + 1,local_148,puVar6,lVar9);
      __ss3maxyxx_xtSLRzlF(&local_128,&local_130,auStack_138,puVar6,lVar9);
      FUN_022238c0(local_128,*(undefined8 *)PTR__UIFontWeightMedium_02578150,puVar7,local_228);
      _objc_retainAutoreleasedReturnValue();
      FUN_022230a0(local_290,local_228);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(local_290);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  FUN_021fb03c(&local_60);
  return;
}

