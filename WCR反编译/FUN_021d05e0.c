// FUN_021d05e0 @ 021d05e0

/* WARNING: Removing unreachable block (ram,0x021d0cd4) */

char * FUN_021d05e0(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  char **ppcVar5;
  ulong uVar6;
  char *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  double dVar12;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3a8;
  undefined8 ***local_388;
  undefined8 ***local_380;
  char *local_330;
  ulong local_328;
  char *local_2c8;
  ulong local_2c0;
  char *local_2b8;
  ulong local_2b0;
  char *local_2a8;
  ulong local_2a0;
  char *local_260;
  ulong local_258;
  char *local_250;
  ulong local_248;
  char *local_210;
  ulong local_208;
  char *local_200;
  ulong local_1f8;
  undefined8 ***local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  char *local_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [24];
  undefined8 **appuStack_180 [3];
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [8];
  undefined8 local_150;
  double local_148;
  char *local_140;
  ulong local_138;
  char *local_130;
  ulong uStack_128;
  char *local_118;
  ulong uStack_110;
  char *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  char *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  char *local_a0;
  ulong uStack_98;
  char *local_90;
  ulong uStack_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long local_40;
  char *local_38;
  ulong local_30;
  
  local_b0 = (char *)0x0;
  local_a8 = 0;
  local_c0 = (char *)0x0;
  local_b8 = 0;
  local_140 = (char *)0x0;
  local_138 = 0;
  local_1c8 = 0.0;
  local_1e8 = (char *)0x0;
  pcVar4 = "menuFillColorHex";
  uVar9 = 0x10;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuFillColorHex",0x10,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_70,0x20,0);
  local_80 = pcVar4;
  local_78 = uVar9;
  __sSDyq_Sgxcig(auStack_58,&local_80,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_80);
  _swift_endAccess(auStack_70);
  if (local_40 == 0) {
    FUN_021c7fc0(auStack_58);
    local_260 = (char *)0x0;
    local_258 = 0;
  }
  else {
    ppcVar5 = &local_210;
    _swift_dynamicCast(ppcVar5,auStack_58,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar5 & 1) == 0) {
      local_250 = (char *)0x0;
      local_248 = 0;
    }
    else {
      local_250 = local_210;
      local_248 = local_208;
    }
    local_260 = local_250;
    local_258 = local_248;
  }
  local_90 = local_260;
  uStack_88 = local_258;
  uStack_98 = local_258;
  local_a0 = local_260;
  if (local_258 == 0) {
    pcVar4 = "#FFFFFF";
    uVar10 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
    local_38 = pcVar4;
    local_30 = uVar10;
    if (uStack_98 != 0) {
      FUN_021c811c(&local_a0);
    }
  }
  else {
    local_38 = local_260;
    local_30 = local_258;
  }
  uVar10 = local_30;
  local_330 = local_38;
  local_b0 = local_38;
  local_a8 = local_30;
  pcVar4 = "menuFillColorHexDark";
  uVar9 = 0x14;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuFillColorHexDark",0x14,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_f8,0x20,0);
  local_108 = pcVar4;
  local_100 = uVar9;
  __sSDyq_Sgxcig(auStack_e0,&local_108,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_108);
  _swift_endAccess(auStack_f8);
  if (local_c8 == 0) {
    FUN_021c7fc0(auStack_e0);
    local_2b8 = (char *)0x0;
    local_2b0 = 0;
  }
  else {
    ppcVar5 = &local_200;
    _swift_dynamicCast(ppcVar5,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar5 & 1) == 0) {
      local_2a8 = (char *)0x0;
      local_2a0 = 0;
    }
    else {
      local_2a8 = local_200;
      local_2a0 = local_1f8;
    }
    local_2b8 = local_2a8;
    local_2b0 = local_2a0;
  }
  local_118 = local_2b8;
  uStack_110 = local_2b0;
  _swift_bridgeObjectRetain(uVar10);
  uStack_128 = uStack_110;
  local_130 = local_118;
  if (uStack_110 == 0) {
    _swift_bridgeObjectRetain(uVar10);
    local_c0 = local_330;
    local_b8 = uVar10;
    if (uStack_128 == 0) {
      local_2c8 = local_330;
      local_2c0 = uVar10;
    }
    else {
      FUN_021c811c(&local_130);
      local_2c8 = local_330;
      local_2c0 = uVar10;
    }
  }
  else {
    _swift_bridgeObjectRelease(uVar10);
    local_2c0 = uStack_128;
    local_2c8 = local_130;
    _swift_bridgeObjectRetain();
    local_c0 = local_2c8;
    local_b8 = local_2c0;
  }
  uVar6 = local_2c0;
  __sSS10uppercasedSSyF();
  _swift_bridgeObjectRelease(local_2c0);
  pcVar4 = "#FFFFFF";
  uVar9 = 7;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
  __sSS2eeoiySbSS_SStFZ(local_2c8,uVar6,pcVar4);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = (ulong)local_2c8 & 0xffffffff;
  if (((ulong)local_2c8 & 1) != 0) {
    pcVar7 = local_330;
    uVar6 = uVar10;
    __sSS10uppercasedSSyF();
    pcVar4 = "#FFFFFF";
    uVar9 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
    __sSS2eeoiySbSS_SStFZ(pcVar7,uVar6,pcVar4);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = (ulong)pcVar7 & 0xffffffff;
    if (((ulong)pcVar7 & 1) != 0) {
      pcVar4 = "#2C2C2E";
      uVar11 = 7;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#2C2C2E",7,1);
      uVar6 = local_b8;
      local_c0 = pcVar4;
      local_b8 = uVar11;
      _swift_bridgeObjectRelease();
    }
  }
  FUN_021d010c();
  local_328 = local_b8;
  pcVar4 = local_c0;
  if ((uVar6 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar10);
    local_328 = uVar10;
  }
  else {
    _swift_bridgeObjectRetain();
    local_330 = pcVar4;
  }
  local_140 = local_330;
  local_138 = local_328;
  local_150 = 0;
  local_3a8 = 0x3ff0000000000000;
  local_160 = 0x3ff0000000000000;
  pcVar4 = "menuFillAlpha";
  uVar9 = 0xd;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("menuFillAlpha",0xd,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_198,0x20,0);
  local_1a8 = pcVar4;
  local_1a0 = uVar9;
  __sSDyq_Sgxcig(appuStack_180,&local_1a8,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_1a8);
  _swift_endAccess(auStack_198);
  if (local_168 == 0) {
    ppppuVar8 = (undefined8 ****)appuStack_180;
    FUN_021c7fc0();
    local_388 = (undefined8 ****)0x0;
  }
  else {
    uVar9 = 0;
    FUN_021c80bc(0);
    ppppuVar8 = &local_1f0;
    _swift_dynamicCast(ppppuVar8,appuStack_180,PTR___sypN_02578b08 + 8,uVar9,6);
    if (((ulong)ppppuVar8 & 1) == 0) {
      local_380 = (undefined8 ****)0x0;
    }
    else {
      local_380 = local_1f0;
    }
    local_388 = local_380;
  }
  bVar2 = (undefined8 ****)local_388 == (undefined8 ****)0x0;
  if (bVar2) {
    local_3a8 = 0;
  }
  else {
    FUN_02222360(local_388,local_3c0);
    (*(code *)PTR__objc_release_02578630)();
    ppppuVar8 = (undefined8 ****)local_388;
  }
  local_1b8 = local_3a8;
  if (bVar2) {
    local_3c8 = DAT_02323d48;
  }
  else {
    local_3c8 = local_3a8;
  }
  local_1c0 = local_3c8;
  local_1b0 = bVar2;
  FUN_021c8058();
  puVar3 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
  __ss3minyxx_xtSLRzlF(&local_160,&local_1c0);
  __ss3maxyxx_xtSLRzlF(&local_148,&local_150,auStack_158,puVar3,ppppuVar8);
  local_1c8 = local_148;
  dVar12 = local_148;
  FUN_021c8144(0);
  _swift_bridgeObjectRetain(local_328);
  FUN_021e2090(local_330,local_328);
  local_1e0 = local_330;
  local_1d8 = local_330;
  local_1d0 = local_330;
  if (local_330 == (char *)0x0) {
    pcVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_02223ae0();
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = pcVar4;
    if (local_1e0 != (char *)0x0) {
      FUN_021c8208(&local_1e0);
    }
  }
  pcVar4 = local_1d0;
  local_1e8 = local_1d0;
  pcVar7 = local_1d0;
  FUN_02221d00(local_1d0,local_3c0);
  _objc_retainAutoreleasedReturnValue();
  _CGColorGetAlpha();
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  pcVar7 = pcVar4;
  FUN_02222120(dVar12 * local_148,pcVar4,local_3c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _swift_bridgeObjectRelease(local_328);
  FUN_021c7f98(&local_c0);
  _swift_bridgeObjectRelease(uVar10);
  return pcVar7;
}

