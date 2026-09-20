// FUN_021ef5b4 @ 021ef5b4

/* WARNING: Removing unreachable block (ram,0x021ef798) */

void FUN_021ef5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  long local_330;
  long local_328;
  long local_2a0;
  long local_298;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined8 ***local_1e8;
  undefined8 ***local_1e0;
  undefined8 ***local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  double local_170;
  double local_168;
  undefined8 local_158;
  long local_150;
  double local_148;
  double local_140;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined8 local_110;
  long local_108;
  double local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 **appuStack_70 [3];
  long local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  double local_38;
  
  local_b8 = 0.0;
  dStack_f8 = 0.0;
  local_100 = 0.0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_108 = 0;
  local_150 = 0;
  local_40 = 0;
  local_208 = 0x4020000000000000;
  local_50 = 0x4020000000000000;
  pcVar3 = "menuIconInset";
  uVar8 = 0xd;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuIconInset",0xd,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_88,0x20,0);
  local_98 = pcVar3;
  local_90 = uVar8;
  __sSDyq_Sgxcig(appuStack_70,&local_98,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_98);
  _swift_endAccess(auStack_88);
  if (local_58 == 0) {
    ppppuVar7 = (undefined8 ****)appuStack_70;
    FUN_021c7fc0();
    local_1e8 = (undefined8 ****)0x0;
  }
  else {
    uVar8 = 0;
    FUN_021c80bc(0);
    ppppuVar7 = &local_1a8;
    _swift_dynamicCast(ppppuVar7,appuStack_70,PTR___sypN_02578b08 + 8,uVar8,6);
    if (((ulong)ppppuVar7 & 1) == 0) {
      local_1e0 = (undefined8 ****)0x0;
    }
    else {
      local_1e0 = local_1a8;
    }
    local_1e8 = local_1e0;
  }
  bVar2 = (undefined8 ****)local_1e8 == (undefined8 ****)0x0;
  if (bVar2) {
    local_208 = 0;
  }
  else {
    FUN_02222360(local_1e8,local_220);
    (*(code *)PTR__objc_release_02578630)();
    ppppuVar7 = (undefined8 ****)local_1e8;
  }
  local_a8 = local_208;
  if (bVar2) {
    local_228 = 0x4000000000000000;
  }
  else {
    local_228 = local_208;
  }
  local_b0 = local_228;
  local_a0 = bVar2;
  FUN_021c8058();
  puVar5 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_50,&local_b0);
  __ss3maxyxx_xtSLRzlF(&local_38,&local_40,auStack_48,puVar5,ppppuVar7);
  local_b8 = local_38;
  dVar9 = local_38;
  FUN_02222060(param_5,local_220);
  dVar10 = local_38 * 0.3;
  dVar12 = local_38 * 0.3;
  local_d0 = param_2;
  local_c8 = param_3;
  local_c0 = param_4;
  FUN_021b4eac();
  lVar4 = param_5;
  dVar11 = dVar10;
  dVar13 = dVar12;
  dVar14 = dVar9;
  uVar8 = param_2;
  local_100 = dVar10;
  dStack_f8 = dVar12;
  uStack_e8 = param_2;
  FUN_02223ac0(param_5,local_220,0x7763696d);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    local_2a0 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_opt_self(PTR__OBJC_CLASS___UIImageView_026ce1c0);
    local_298 = lVar4;
    _swift_dynamicCastObjCClass(lVar4,puVar5);
    if (local_298 == 0) {
      (*(code *)PTR__objc_release_02578630)(lVar4);
      local_298 = 0;
    }
    local_2a0 = local_298;
  }
  if (local_2a0 != 0) {
    local_150 = local_2a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = dVar10;
    local_168 = dVar12;
    local_158 = param_2;
    FUN_022230c0(local_2a0,local_220);
    (*(code *)PTR__objc_release_02578630)(local_2a0);
    uVar8 = 0;
    FUN_021fb364();
    (*(code *)PTR__objc_retain_02578638)(local_2a0);
    lVar4 = local_2a0;
    FUN_022221a0(local_2a0,local_220);
    (*(code *)PTR__objc_release_02578630)(local_2a0);
    plVar6 = &local_178;
    local_180 = 2;
    local_178 = lVar4;
    FUN_021fb3f8();
    __sSQ2eeoiySbx_xtFZTj(plVar6,&local_180,uVar8,lVar4);
    if (((ulong)plVar6 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)(local_2a0);
      lVar4 = local_2a0;
      FUN_02222960(local_2a0,local_220);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(local_2a0);
      (*(code *)PTR__objc_retain_02578638)(local_2a0);
      FUN_02222060(local_2a0,local_220);
      local_1a0 = dVar10;
      local_198 = dVar12;
      local_188 = param_2;
      (*(code *)PTR__objc_release_02578630)(local_2a0);
      FUN_021b0958(dVar10,dVar12);
      dVar12 = 0.5;
      dVar10 = dVar10 * 0.5;
      FUN_02222f40(lVar4,local_220);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    (*(code *)PTR__objc_release_02578630)(local_2a0);
    dVar11 = dVar10;
    dVar13 = dVar12;
    dVar14 = dVar9;
    uVar8 = param_2;
  }
  lVar4 = param_5;
  FUN_02223ac0(param_5,local_220,0x77636662);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    local_330 = 0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_opt_self(PTR__OBJC_CLASS___UILabel_026cdfb8);
    local_328 = lVar4;
    _swift_dynamicCastObjCClass(lVar4,puVar5);
    if (local_328 == 0) {
      (*(code *)PTR__objc_release_02578630)(lVar4);
      local_328 = 0;
    }
    local_330 = local_328;
  }
  if (local_330 != 0) {
    local_108 = local_330;
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222060(param_5,local_220);
    local_148 = dVar11;
    local_140 = dVar13;
    local_130 = uVar8;
    local_128 = dVar11;
    local_120 = dVar13;
    local_110 = uVar8;
    FUN_022230c0(dVar11,dVar13,dVar14,uVar8,local_330,local_220);
    (*(code *)PTR__objc_release_02578630)(local_330);
    (*(code *)PTR__objc_release_02578630)(local_330);
  }
  return;
}

